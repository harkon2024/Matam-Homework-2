
#include "Pirate.h"


Pirate::Pirate(const string& name, DEVIL_FRUIT fruit, int bounty): name(name), fruit(fruit), bounty(bounty) {}


void Pirate::setName(const string& name){
    this->name = name;
}

void Pirate::setDevilFruit(DEVIL_FRUIT fruit) {
    this->fruit = fruit;
}

DEVIL_FRUIT Pirate::getDevilFruit() const {
    return fruit;

int Pirate ::getBounty() const {
    return bounty;
}

void Pirate ::setBounty(int x) {
    bounty = x;
}

std::string Pirate::getName(){
    return name;
}


std::ostream &operator<<(std::ostream &os, const Pirate &pirate){
    os << pirate.name << pirate.bounty;
    return os;
}
