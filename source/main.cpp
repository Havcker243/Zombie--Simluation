#include <alerted.h>
#include <ignorant.h>
#include <zombie.h>
#include <denizenz.h>
#include <city.h>
#include <iostream>
#include <time.h>

using std::cout;
using std::cin;

int main()
{
    srand(time(NULL));

    City simville;

    simville.populate_city();
    simville.simulate();

    

    std::ofstream test("test.txt");

    vector<Denizen *> residents;
    residents = simville.getResidents();

    residents[1515]->encounter(residents[0]);
    residents[1758]->encounter(residents[1]);
    
    for(int i = 0; i < 2000; i++)
    {

        test << residents[i]->getName()
             << "  "
             << residents[i]->getDistrict()
             << "  "
             << residents[i]->getType()
             << "\n";

        

    }
    test.close();

    
    

}
