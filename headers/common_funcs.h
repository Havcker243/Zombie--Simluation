#ifndef FUNCS_H
#define FUNCS_H

#include <iostream>
#include <map>

using std::map;
using std::cout;
using std::cin;
using std::string;



void get_chances(map<string, int> &i, map<string, int> &a)
{
    cout << "Please, before starting the simulation, input the chances."
         << "Make sure that the input sum up to 100 else the simulation will not work properly.\n";

    int pro;
    string type;

    type = "Chance of Ignorant becoming a zombie when see a zombie";
    cout << type << ": ";
    cin >> pro;
    i[type] = pro;

    type = "Chance of Ignorant believing the alarmed person";
    cout << type << ": ";
    cin >> pro;
    i[type] = pro;

    type = "Chance of Alerted escaping from the zombie";
    cout << type << ": ";
    cin >> pro;
    a[type] = pro;

    type = "Chance of Alerted killing the zombie";
    cout << type << ": ";
    cin >> pro;
    a[type] = pro;

    type = "Chance of Alerted becoming a zombie";
    cout << type << ": ";
    cin >> pro;
    a[type] = pro;
}










#endif