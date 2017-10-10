

/*
 * File:   CrazyRandomSword.h
 * Author: Cody
 */

#include <string>
#include "Weapon.h"
#include <stdlib.h>


#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon{
    public:
        CrazyRandomSword():Weapon("Crazy Random Sword", (rand() % 100 + 10)){}
        virtual ~CrazyRandomSword(){};
        virtual double hit(double armor);
        
};

#endif /* CRAZYRANDOMSWORD_H */

