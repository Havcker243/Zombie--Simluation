#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <denizenz.h>

class Zombie : public Denizen
{
public:

    Zombie(std::string n, std::string d, map<string, int> c) : Denizen(n, d, c) {}

    Zombie(string d) : Denizen(d) {}
    
    Denizen *speak();

    std::string getType();

    bool encounter(Denizen *&ptr);

    void convert_ignorant(Denizen *&ptr);

};

#endif