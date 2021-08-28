#pragma once

#include "Item.h"
#include "Character.h"

struct DefensiveItem : Item
{
    DefensiveItem() : Item("defensive item", 3) { } //name, effect
    void use(Character* character) override;
};

