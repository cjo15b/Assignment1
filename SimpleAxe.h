
/* 
 * File:   SimpleAxe.h
 * Author: Cody
 *
 */

#include <string>
#include "Weapon.h"


#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

class SimpleAxe : public Weapon{
    public:
        SimpleAxe():Weapon("Simple Axe", 60.0){}
        virtual ~SimpleAxe() {};
        virtual double hit(double armor);
    
};

#endif /* SIMPLEAXE_H */

