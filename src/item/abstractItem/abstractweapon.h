#ifndef ABSTRACTWEAPON_H
#define ABSTRACTWEAPON_H

#include "abstractitem.h"

class AbstractWeapon : public AbstractItem
{
public:
    AbstractWeapon(Item itemID, AbstractItemAttribute* itemAttribute = new AbstractItemAttribute());
};

#endif // ABSTRACTWEAPON_H
