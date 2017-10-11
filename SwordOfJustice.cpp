/*
 * file:SwordOfJustice.cpp
 * 
*Defines the Sword Of Justice. The Sword of justice has approximately 1.0 hitPoints. Protector
 * of the weak and innocent, the Sword Of justice will cut down anyone with any sort of armor (deals 100000.0 times more damage for every 1 armor).
 *  However, if the person is not wearing much armor (a.k.a less than 5 armor) the person will only take 1.0 damage from
 * the Sword of Justice!
 * 
 *                      -Cody O'Connor
*/

#include "SwordOfJustice.h"

double SwordOfJustice::hit(double armor){
    double damage = hitPoints;
    if(armor >= 5){
        return (armor * 100000);
    }
    return damage;
}



