#ifndef ABSTRACTATTRIBUTE_H
#define ABSTRACTATTRIBUTE_H

#include <qtypes.h>

enum Attribute{
    attack,
    defead,
};

enum AttributeLimit{
    upLimit,
    downLimit
};

class AbstractAttribute
{
public:
    AbstractAttribute(quint16 attack = 0, quint16 attackUpLimit = 100, quint16 attackDownLimit = 0,
        quint16 defead = 0, quint16 defeadUpLimit = 100, quint16 defeadDownLimit = 0);

    quint16 get_Attribute(Attribute attributeName);
    quint16 get_Attribute_Limit(Attribute attributeName, AttributeLimit LimitName);

    void set_Attribute(Attribute attributeName, quint16 number);
    bool add_Attribute(Attribute attributeName, quint16 addition);
    bool sub_Attribute(Attribute attributeName, quint16 subtraction);

    void set_Attribute_Limit(Attribute attributeName, AttributeLimit LimitName, quint16 number);
    void add_Attribute_Limit(Attribute attributeName, AttributeLimit LimitName, quint16 addition);
    void sub_Attribute_Limit(Attribute attributeName, AttributeLimit LimitName, quint16 subtraction);


private:
    quint16 attack;
    quint16 attackUpLimit;
    quint16 attackDownLimit;

    quint16 defead;
    quint16 defeadUpLimit;
    quint16 defeadDownLimit;
};

#endif // ABSTRACTATTRIBUTE_H
