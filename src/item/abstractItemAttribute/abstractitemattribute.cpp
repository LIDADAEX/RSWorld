#include "abstractitemattribute.h"

AbstractItemAttribute::AbstractItemAttribute(quint16 attack, quint16 defead, quint16 recover):
    attack(attack), defead(defead), recover(recover){}

Item::ItemClass AbstractItemAttribute::get_ItemClass()
{
    return itemClass;
}

quint16 AbstractItemAttribute::get_ItemAttribute(Item::ItemAttribute itemAttributeName)
{
    switch(itemAttributeName)
    {
    case Item::ItemAttribute::attack:
    {
        return attack;
    }
    case Item::ItemAttribute::defead:
    {
        return defead;
    }
    case Item::ItemAttribute::recover:
    {
        return recover;
    }
    default:
        return 0;
    }
}


