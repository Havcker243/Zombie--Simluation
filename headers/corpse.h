#ifndef CORPSE_H
#define CORPSE_H

#include <denizenz.h>

class Corpse : public Denizen
{
public:

    Corpse(std::string n, std::string d, map<string, int> c) : Denizen(n, d, c) {}
    
    Denizen *speak();

    std::string getType();

    bool encounter(Denizen *&ptr);

    void convert_ignorant(Denizen *&ptr);

};

#endif