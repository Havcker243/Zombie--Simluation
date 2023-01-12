#include <ignorant.h>
#include <alerted.h>
#include <city.h>
#include <zombie.h>

Denizen *Ignorant::speak()
{
    std::cout << "Just living my living my life, u know?";
    return this;

}

std::string Ignorant::getType()
{
    return std::string ("Ignorant");
}

/*
// num = ptr.getChacne;
// if ( r_num  < num )
// a.encounter(b)
new alerted = ptr
delete a;
a = 
*/
bool Ignorant::encounter(Denizen *&ptr)
{
    return true;
}

void Ignorant::convert_ignorant(Denizen *&ptr)
{
    return; 

}