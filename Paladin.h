#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin(const std::string& name_, int hp, int armor);

    const std::string& getName() override;
    std::string getStats() override;  

    void attack(Character& other) override;
    

private:
    const std::string name;
};
