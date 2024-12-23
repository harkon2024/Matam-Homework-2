enum DEVIL_FRUIT {NONE,ORANGE, APPLE, BANANA};
#pragma once

#include <iostream>

using std::string;

class Pirate {
private:
    string name;
    DEVIL_FRUIT fruit;

public:
    Pirate() : name("") {};

    Pirate(const string& name,DEVIL_FRUIT fruit = DEVIL_FRUIT::NONE);

    void setDevilFruit(DEVIL_FRUIT fruit);
    DEVIL_FRUIT getDevilFruit() const;



    ~Pirate() = default;

    void setName(const string& name);

    string getName();

    friend std::ostream &operator<<(std::ostream &os, const Pirate &pirate);
};
