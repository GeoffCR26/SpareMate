/************************************************************************
Description du code : Affichage d'une chaîne de charactères sur deux lignes
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
    Serial.begin(115200);//Initialisation de la communication série à une vitesse de transmission de 115200 bits par seconde
    lcd.init(); //Initialisation de l'écran LCD

    delay(5000);
}

//CONDITIONS QUI SE REPETE EN BOUCLE
void loop() {
  lcd.setCursor(0,0);//On choisit de mettre le curseur pour écrire à la première colonne et à la première ligne
  lcd.print("SpareMate");
  lcd.setCursor(0,1);//On choisit de mettre le curseur pour écrire à la première colonne et à la deuxième ligne
  lcd.print("PIND 2024");
}
