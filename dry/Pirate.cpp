
#include "Pirate.h"

Pirate::Pirate(const string& name, DEVIL_FRUIT fruit): name(name), fruit(fruit) {}


void Pirate::setName(const string& name){
    this->name = name;
}

void Pirate::setDevilFruit(DEVIL_FRUIT fruit) {
    this->fruit = fruit;
}

DEVIL_FRUIT Pirate::getDevilFruit() const {
    return fruit;
}

std::string Pirate::getName(){
    return name;
}


std::ostream &operator<<(std::ostream &os, const Pirate &pirate){
    os << pirate.name;
    return os;
}
