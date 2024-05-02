#include "arduino.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QObject>
Arduino::Arduino()
{
    data="";
    arduino_port_name="";
    arduino_is_available=false;
    serial=new QSerialPort;
}

QString Arduino::getarduino_port_name()
{
    return arduino_port_name;
}

QSerialPort *Arduino::getserial()
{
   return serial;
}
int Arduino::connect_arduino()
{
    // Reset the state variables
    data = "";
    arduino_port_name = "";
    arduino_is_available = false;

    // Find the port on which the Arduino is connected
    foreach (const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts()) {
        if (serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier()) {
            if (serial_port_info.vendorIdentifier() == arduino_vendor_id &&
                    serial_port_info.productIdentifier() == arduino_product_id) {
                arduino_is_available = true;
                arduino_port_name = serial_port_info.portName();
                break;
            }
        }
    }

    // Log the port name
    qDebug() << "Arduino port name is: " << arduino_port_name;

    // If the Arduino is available, configure the serial port and open it
    if (arduino_is_available) {
        serial->setPortName(arduino_port_name);
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);

        if (serial->open(QSerialPort::ReadWrite)) {
            // Serial port opened successfully
            return 0;
        } else {
            // Error opening the serial port
            qDebug() << "Error opening serial port: " << serial->errorString();
            return 1;
        }
    } else {
        // Arduino not found
        qDebug() << "Arduino not found";
        return -1;
    }
}


int Arduino::close_arduino()

{

    if(serial->isOpen()){
            serial->close();
            return 0;
        }
    return 1;


}


 QByteArray Arduino::read_from_arduino()
{

    if(serial->isReadable()){
        serial->waitForReadyRead(20);
         data=serial->readAll();
         return data;
    }
    return NULL;
 }






 QString Arduino::recuperdoone(int ID) {
     // Check if the entry with the given ID exists
     QSqlQuery checkQuery;
     checkQuery.prepare("SELECT * FROM ABONNE WHERE ID_A = :ID");
     checkQuery.bindValue(":ID", ID);

     if (!checkQuery.exec()) {
         // Handle the database error
         return "Database error";
     }

     if (checkQuery.next()) {
         // Entry with the given ID exists
         QString nom = checkQuery.value("NOM").toString();
         QString prenom = checkQuery.value("PRENOM").toString();
         // Return the result in the specified format
         return QString("%1,%2").arg(nom).arg(prenom);
     } else {
         // Entry with the given ID does not exist
         return "0";
     }
 }








 QByteArray Arduino::getdata()
 {
     return data;
 }
int Arduino::write_to_arduino( QByteArray d)

{

    if(serial->isWritable()){
        serial->write(d);  // envoyer des donnés vers Arduino
    }else{
        qDebug() << "Couldn't write to serial!";
    }


}

