#ifndef ALERTED_H
#define ALERTED_H

#include <denizenz.h>

class Alerted : public Denizen
{
public:

    Alerted(std::string n, std::string d, map<string, int> c) : Denizen(n, d, c) {}

    Alerted(string d) : Denizen(d) {}


    Denizen *speak();

    // Let the programer know what type of denizen is he dealing with
    std::string getType();

    bool encounter(Denizen *&ptr);

    void convert_ignorant(Denizen *&ptr);

};

#endif