/* 
 * File:   SimpleAxe.cpp
 * Author: Cody
 *
*/

//Simple Axe that ignores armor if armor is less than 20 and greater than or equal to zero.

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor){
    double damage;
    if(armor >= 0 && armor < 20) {
        damage = hitPoints;
    }
    else {
        damage = hitPoints - armor;
    }
    return damage;
}