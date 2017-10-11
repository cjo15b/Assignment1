
/* 
 * File:   SwordOfJustice.h
 * Author: Cody
 *
 */

#ifndef SWORDOFJUSTICE_H
#define SWORDOFJUSTICE_H


#include <string>
#include "Weapon.h"

 /* 
*Defines the Sword Of Justice. The Sword of justice has approximately 1.0 hitPoints. Protector
 * of the weak and innocent, the Sword Of justice will cut down anyone with any sort of armor (deals 100000.0 times more damage for every 1 armor).
 *  However, if the person is not wearing much armor (a.k.a less than 5 armor) the person will only take 1.0 damage from
 * the Sword of Justice!
 * 
 *                      -Cody O'Connor
 */
class SwordOfJustice : public Weapon {
public:

    SwordOfJustice() : Weapon("Sword Of Justice", 1.0) {
    }
    virtual ~SwordOfJustice() {}; 
    virtual double hit(double armor);

};


#endif /* SWORDOFJUSTICE_H */

