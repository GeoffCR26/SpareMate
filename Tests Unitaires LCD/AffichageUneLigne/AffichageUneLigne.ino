/************************************************************************
Description du code : Affichage d'une chaîne de charactères sur une ligne
Auteur : RAMOS Geoffrey
Date : 13/03/2024
Version : V1
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
    Serial.begin(115200);
    lcd.init(); //Initialisation de l'écran LCD

    //AFFICHAGE DU MESSAGE
    lcd.setCursor(0,0);//On choisit de mettre le curseur pour écrire à la première colonne et à la première ligne
    lcd.print("SpareMate");
}

//CONDITIONS QUI SE REPETE EN BOUCLE
void loop() {
  
}
