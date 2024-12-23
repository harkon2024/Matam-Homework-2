enum DEVIL_FRUIT {NONE,ORANGE, APPLE, BANANA};
#pragma once

#include <iostream>

using std::string;

class Pirate {
private:
    string name;
    DEVIL_FRUIT fruit;
    int bounty;

public:
    Pirate() : name(""), fruit(NONE), bounty(0) {};

    Pirate(const string& name,DEVIL_FRUIT fruit = DEVIL_FRUIT::NONE, int bounty = 0);

    void setDevilFruit(DEVIL_FRUIT fruit);
    DEVIL_FRUIT getDevilFruit() const;


    int getBounty() const;
    void setBounty(int x);


    ~Pirate() = default;

    void setName(const string& name);

    string getName();

    friend std::ostream &operator<<(std::ostream &os, const Pirate &pirate);
};
