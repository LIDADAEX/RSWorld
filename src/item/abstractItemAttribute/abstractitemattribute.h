#ifndef ABSTRACTITEMATTRIBUTE_H
#define ABSTRACTITEMATTRIBUTE_H

#include <qtypes.h>



namespace Item {
enum ItemAttribute
{
    attack,
    defead,
    recover,
};

enum ItemClass
{
    weapon,
    shield,
    medicine,
};

}





class AbstractItemAttribute
{
public:
    AbstractItemAttribute(quint16 attack = 0, quint16 defead = 0, quint16 recover = 0);

    Item::ItemClass get_ItemClass(void);

    quint16 get_ItemAttribute(Item::ItemAttribute itemAttributeName);

private:
    Item::ItemClass itemClass;

    quint16 attack;
    quint16 defead;
    quint16 recover;
};

#endif // ABSTRACTITEMATTRIBUTE_H
