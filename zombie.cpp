#include <zombie.h>
#include <alerted.h>

Denizen* Zombie::speak()
{
    std::cout << "Get over here!";
    return this;
}

std:: string Zombie::getType()
{
    return std::string ("Zombie");
}

bool Zombie::encounter(Denizen *&ptr)
{
    if (ptr->getType() == "Alerted")
    {
        int input1 = ptr->getChance()["Chance of Alerted escaping from the zombie"];
        int input2 = ptr->getChance()["Chance of Alerted killing the zombie"];
        int input3 = ptr->getChance()["Chance of Alerted becoming a zombie"];

        if (r_num <= input1 + input2 + input3)
        {
            Denizen* a = new Zombie(ptr->getName(), ptr->getDistrict(), this->getChance());
            delete ptr;
            ptr = a;
            return true;
        }
        else
        {
            return true;
        }
    }
    else if(ptr->getType() == "Ignorant")
    {
        if(r_num <= ptr->getChance()["Chance of Ignorant becoming a zombie when see a zombie"])
        {
            Denizen* a = new Zombie(ptr->getName(), ptr->getDistrict(), this->getChance());
            delete ptr;
            ptr = a;
            return true;           
        }
        else
        {
            return false; 
        }
    }   

    return true;

}

void Zombie::convert_ignorant(Denizen *&ptr)
{
    return; 
}

