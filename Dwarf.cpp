#include "Dwarf.h"
#include "Utility.h"


//Dwarf::Dwarf
Dwarf::Dwarf(const std::string& name_, int hp_, int armor_) :
Character(hp_, armor_, 4),
name(name_)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(1);
}

//Dwarf::attack
void Dwarf::attack(Character& other)
{
    Character::attack(other);
}

//Dwarf::getName
const std::string& Dwarf::getName()
{
    return name;
}

//Dwarf::getStats
std::string Dwarf::getStats()
{
    return getCharacterStats(const_cast<Dwarf*>(this));
}
