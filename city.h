#ifndef CITY_H
#define CITY_H

#include <vector>
#include <denizenz.h>
#include <map>
#include <fstream>

using std::vector;
using std::map;

/*
The goal is to represent a city that is going to an apocalypse zombie
Imagine is like a Spokane. The thing it that only have 3 districts
It contain the name of the district and the amount of citizen
*/
class City
{
private:

    vector <Denizen *> residents;
    
public:

    void addResidents(Denizen *p);

    // Get method
    vector<Denizen *> getResidents() { return residents; }

    void populate_city();

    void get_stats(map<string, int> &s);

    void residents_move();

    void simulate();



};

#endif