#include <alerted.h>
#include <city.h>
#include <ignorant.h>
#include <zombie.h>
#include <corpse.h>

Denizen *Alerted::speak()
{
    std::cout << "Run!!! Zombies!!!! Ahhhh!!!";
    return this;
}

string Alerted::getType()
{
    return std::string("Alerted");
}

bool Alerted::encounter(Denizen *&ptr)
{
    if (ptr->getType() == "Ignorant")
    {
        if (r_num <= ptr->getChance()["Chance of Ignorant believing the alarmed person"])
        {
            Denizen *a = new Alerted(ptr->getName(), ptr->getDistrict(), this->getChance());
            delete ptr;
            ptr = a;
            return true;
        }
        else
        {
            return true;
        }
    }
    else if (ptr->getType() == "Zombie")
    {
        int input1 = this->getChance()["Chance of Alerted escaping from the zombie"];
        int input2 = this->getChance()["Chance of Alerted killing the zombie"];
        //int input3 = this->getChance()["Chance of Alerted becoming a zombie"];

        // escaping
        if (r_num <= input1)
        {
            return true;
        }
        // killing
        else if (r_num <= input1 + input2)
        {
            Denizen* a = new Corpse(ptr->getName(), ptr->getDistrict(), ptr->getChance());
            delete ptr;
            ptr = a;
            return true;
        }        
        else
        {
            return true;
        }
    }

    return true;

}

void Alerted::convert_ignorant(Denizen *&ptr)
{
    Denizen* a = new Alerted(ptr->getName(), ptr->getDistrict(), this->getChance());
    delete ptr;
    ptr = a;
    return; 

}
