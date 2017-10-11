/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com> 
 * co-author: Cody O'Connor
 *  
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "SimpleAxe.h"
#include "CrazyRandomSword.h"
#include "SwordOfJustice.h"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }
    
    if(name.compare("axe") == 0){
        return new SimpleAxe();
    }
    
    if(name.compare("Crazy Random Sword")== 0){
        return new CrazyRandomSword();
    }
    if(name.compare("Sword Of Justice")== 0){
        return new SwordOfJustice();
    }
    throw "Invalid weapon";
}