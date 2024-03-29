/************************************************************************
Description du code : Test du RGB du fond d'écran
Auteur : RAMOS Geoffrey
Date : 13/03/2024
Version : V1

-----------------------------------------
        Câblage       |  LCD |Carte Mega|
-----------------------------------------
                      |  Vcc |    5V    |
-----------------------------------------
                      |  GND |    GND   |
-----------------------------------------
                      |  SDA |    SDA   |
-----------------------------------------
                      |  SCL |    SCL   |
-----------------------------------------

 ************************************************************************/
#include "DFRobot_RGBLCD1602.h"

int r = 255, b = 0, v = 0; //On initialise les variables pour les couleurs

/*
-----------------------------------------
        Module        | Version| RGBAddr|
-----------------------------------------
    LCD1602 Module    |  V1.0  | 0x60   |
-----------------------------------------
*/

DFRobot_RGBLCD1602 lcd(/*RGBAddr*/0x60 ,/*lcdCols*/16,/*lcdRows*/2);  //16 charactères et 2 lignes à l'adresse 0x60

//CONDITIONS DE BASE
void setup() {
    Serial.begin(115200);
    lcd.init(); //Initialisation de l'écran LCD

    //AFFICHAGE DU MESSAGE
    lcd.setRGB(255,0,0);//On définie la couleur de base de l'écran LCD
    lcd.setCursor(0,0);//On choisit de mettre le curseur pour écrire à la première colonne et à la première ligne
    lcd.print("SpareMate");
    lcd.setCursor(0,1);//On choisit de mettre le curseur pour écrire à la première colonne et à la deuxième ligne
    lcd.print("PIND 2024");
}

//CONDITIONS QUI SE REPETE EN BOUCLE
void loop() {

}
