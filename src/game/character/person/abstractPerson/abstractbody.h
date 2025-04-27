#ifndef ABSTRACTBODY_H
#define ABSTRACTBODY_H

#include "src/item/abstractItem/abstractitem.h"

enum BodyPart
{
    head,
    chest,
    armLeft,
    armRight,
    handLeft,
    handRight,
    leg,
    shoes
};

class AbstractBody
{
public:
    AbstractBody();

    Item getItemOfBody(BodyPart body);

private:
    Item head;
    Item chest;
    Item armLeft;
    Item armRight;
    Item handLeft;
    Item handRight;
    Item leg;
    Item shoes;
};

#endif // ABSTRACTBODY_H
