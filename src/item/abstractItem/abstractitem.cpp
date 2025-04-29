#include "abstractitem.h"

AbstractItem::AbstractItem(Item itemID, AbstractItemAttribute* itemAttribute) :
    itemID(itemID), itemAttribute(itemAttribute){}

AbstractItem::~AbstractItem()
{
    delete itemAttribute;
}
