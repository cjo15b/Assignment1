

/*
 * File:   CrazyRandomSword.h
 * Author: Cody
 */

#include <string>
#include "Weapon.h"
#include <stdlib.h>


#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

//define behavior of Crazy Random Sword. Sword has random hitpoints from 10 to 100. randomly ignores armor
//from 0 to half of current armor.

class CrazyRandomSword : public Weapon{
    public:
        CrazyRandomSword():Weapon("Crazy Random Sword", (rand() % 100 + 10)){}
        virtual ~CrazyRandomSword(){};
        virtual double hit(double armor);
        
};

#endif /* CRAZYRANDOMSWORD_H */

