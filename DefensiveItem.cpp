#include "DefensiveItem.h"
#include "Utility.h"
// #include "Dwarf.h"
// #include "Paladin.h"
// #include "DragonSlayer.h"
// #include "Dragon.h"



void DefensiveItem::use(Character* character)
{
   useDefensiveItem(character, *this);
}
