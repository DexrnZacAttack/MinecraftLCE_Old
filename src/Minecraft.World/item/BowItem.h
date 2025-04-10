#pragma once
#include "Minecraft.World/item/Item.h"
#include <memory>

class Player;
class ItemInstance;

class BowItem : public Item {
public:
    not_null_ptr<ItemInstance> findProjectile(const std::shared_ptr<Player>&);
};