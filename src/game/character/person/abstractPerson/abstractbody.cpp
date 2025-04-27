#include "abstractbody.h"

AbstractBody::AbstractBody() {}

Item AbstractBody::getItemOfBody(BodyPart body)
{
    switch(body)
    {
    case BodyPart::head:
    {
        return head;
    }
    case BodyPart::chest:
    {
        return chest;
    }
    case BodyPart::armLeft:
    {
        return armLeft;
    }
    case BodyPart::armRight:
    {
        return armRight;
    }
    case BodyPart::handLeft:
    {
        return handLeft;
    }
    case BodyPart::handRight:
    {
        return handRight;
    }
    case BodyPart::leg:
    {
        return leg;
    }
    case BodyPart::shoes:
    {
        return shoes;
    }
    default:
    {
        return NoneItem;
    }
    }
}

