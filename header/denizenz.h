#ifndef DENIZENZ_H
#define DENIZENZ_H

#include <stdlib.h> // Srand and rand
#include <iostream>
#include <map>

using std::map;
using std::string;

/*
Goal fo the class is to indicate the behavior of the denizens
Imagine is a zombies apocalypse there is people that know(alert), people that dont know(ignorant) and infected people(zombie)
Hold the thing each type of denizens share
*/
class Denizen
{
private:
    map<string, int> chance; // maps the chance of something happening. Eg.: chance[Ignorant become zombie] = 30%.
    std::string name;
    std::string district;
    

public:
    const int r_num = rand() % 100 + 1;

    // Arg constructor
    Denizen(std::string n, std::string d, map<string, int> c)
    {
        name = n;
        district = d;
        chance = c;
    }

    Denizen(string d)
    {
        district = d;
    }

    // Destructor
    ~Denizen() {}
   
    // Utility to get the name
    // Return the name of the denizen
    std::string getName() { return name; }

    // Utility to get the District
    // Return the district of the denizen
    std::string getDistrict() { return district; }
    
    // Utility to get the chances
    // Return the chance map 
    map<string, int> getChance() { return chance; }

    // Phrases to make it a little for interesting
    virtual Denizen *speak() = 0;

    // get the type of the denizens(ignorant, alerted and zombie)
    virtual std::string getType() = 0;

    // Decide what happen when Denizen A encounters Denizen B; 
    // Call A.encounter(B)
    virtual bool encounter(Denizen *&ptr) = 0 ;

    virtual void convert_ignorant(Denizen *&ptr) = 0;

};

#endif