#include "AttackItem.h"
#include "Utility.h"

AttackItem::AttackItem() : Item("attack item", 10) //name, effect
{   
}

void AttackItem::use(Character* character)
{
    useAttackItem(character, this);
}
