#pragma once

#include <vector>
#include <memory>
#include "Item.h"


std::vector<std::unique_ptr<Item>> makeHelpfulItems(int num);

std::vector<std::unique_ptr<Item>> makeDefensiveItems(int num);

struct Character;
std::string getCharacterStats(Character* ch);

void useDefensiveItem(Character* ch, Item* item);
void useHelpfulItem(Character* ch, Item* item);
void useAttackItem(Character* ch, Item* item);
void restoreAndBoostStatsByTenPercent(int& currentStat, int& initialStat);
