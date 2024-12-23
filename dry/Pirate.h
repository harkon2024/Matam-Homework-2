
#pragma once

#include <iostream>

using std::string;

class Pirate {
private:
    string name;
    int bounty;

public:
    Pirate() : name("") {};

    Pirate(const string& name, int bounty);

    int getBounty() const;
    void setBounty(int x);

    ~Pirate() = default;

    void setName(const string& name);

    string getName();

    friend std::ostream &operator<<(std::ostream &os, const Pirate &pirate);
};
