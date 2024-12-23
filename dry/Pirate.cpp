
#include "Pirate.h"

Pirate::Pirate(const string& name, int bounty): name(name), bounty(bounty) {}


void Pirate::setName(const string& name){
    this->name = name;
}

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
