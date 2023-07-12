#ifndef IGNORANT_H
#define IGNORANT_H

#include <denizenz.h>


class Ignorant : public Denizen
{
public:

    // Arg Constructor
    Ignorant(std::string n, std::string d, map<string, int> c) : Denizen(n, d, c) {}

    Ignorant(string d) : Denizen(d) {}

    Denizen *speak();

    string getType();

    bool encounter(Denizen *&ptr);
    
    void convert_ignorant(Denizen *&ptr);

};

#endif