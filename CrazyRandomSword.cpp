/* 
 * File:   CrazyRandomSword.cpp
 * Author: Cody
 *
*/

#include "CrazyRandomSword.h"

//Sword randomly ignores armor from 0 to half of current armor.

double CrazyRandomSword::hit(double armor){
   
    double damage = hitPoints - (rand() % int(.5 * armor));
    return damage;

}