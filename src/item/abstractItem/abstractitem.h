#ifndef ABSTRACTITEM_H
#define ABSTRACTITEM_H

#include "src/item/abstractItemAttribute/abstractitemattribute.h"
#include <qtypes.h>
#define Item quint32
#define NoneItem 0

class AbstractItem
{
public:
    AbstractItem(Item itemID, AbstractItemAttribute* itemAttribute = new AbstractItemAttribute());
    ~AbstractItem();

    Item get_ItemID(void);
private:
    Item itemID;

    AbstractItemAttribute* itemAttribute;

};

#endif // ABSTRACTITEM_H
