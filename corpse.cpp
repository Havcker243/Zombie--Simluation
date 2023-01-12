#include <corpse.h>

Denizen* Corpse::speak()
{
    std::cout << "Don't mind me, I'm dead.";
    return this;
}

std:: string Corpse::getType()
{
    return std::string ("Corpse");
}

bool Corpse::encounter(Denizen *&ptr)
{
    return true;
}

void Corpse::convert_ignorant(Denizen *&ptr)
{
    return; 
}