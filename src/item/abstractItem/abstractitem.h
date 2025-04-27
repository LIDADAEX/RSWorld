#ifndef ABSTRACTITEM_H
#define ABSTRACTITEM_H

#include <qtypes.h>
#define Item quint32
#define NoneItem 0

class AbstractItem
{
public:
    AbstractItem(Item ItemID);

    Item get_ItemID(void);
private:
    Item ItemID;

};

#endif // ABSTRACTITEM_H
