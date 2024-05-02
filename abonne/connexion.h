#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Connexion
{
    QSqlDatabase db;

public:
    Connexion();
    bool createconnect();
    void closeconnect();
};

#endif // CONNECTION_H
/*
CREATE TABLE ABONNE (
    ID_A INT PRIMARY KEY AUTO_INCREMENT,
    NOM VARCHAR(255),
    PRENOM VARCHAR(255),
    EMAIL VARCHAR(255),
    PAIMENT VARCHAR(255),
    IMAGE_PATH VARCHAR(255)
);
INSERT INTO KHADIJABA.ABONNE (ID_A,NOM, PRENOM, EMAIL, PAIMENT, IMAGE_PATH)
VALUES (0,'Doe', 'John', 'john.doe@example.com', 'Credit Card', '/path/to/image1.jpg');

INSERT INTO KHADIJABA.ABONNE (ID_A,NOM, PRENOM, EMAIL, PAIMENT, IMAGE_PATH)
VALUES (1,'Smith', 'Alice', 'alice.smith@example.com', 'PayPal', '/path/to/image2.jpg');

INSERT INTO KHADIJABA.ABONNE (ID_A,NOM, PRENOM, EMAIL, PAIMENT, IMAGE_PATH)
VALUES (2,'Johnson', 'Bob', 'bob.johnson@example.com', 'Bank Transfer', '/path/to/image3.jpg');


*/
