/* 
 * File:   SimpleAxe.cpp
 * Author: Cody
 *
*/

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