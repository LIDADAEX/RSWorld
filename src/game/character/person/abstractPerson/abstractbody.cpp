#include "abstractbody.h"

AbstractBody::AbstractBody() {}

Item AbstractBody::get_ItemOfBody(BodyPart body)
{
    switch(body)
    {
    case BodyPart::head:
    {
        return head.get_Equipment();
    }
    case BodyPart::chest:
    {
        return chest.get_Equipment();
    }
    case BodyPart::armLeft:
    {
        return armLeft.get_Equipment();
    }
    case BodyPart::armRight:
    {
        return armRight.get_Equipment();
    }
    case BodyPart::handLeft:
    {
        return handLeft.get_Equipment();
    }
    case BodyPart::handRight:
    {
        return handRight.get_Equipment();
    }
    case BodyPart::leg:
    {
        return leg.get_Equipment();
    }
    case BodyPart::shoes:
    {
        return shoes.get_Equipment();
    }
    default:
    {
        return NoneItem;
    }
    }
}

bool AbstractBody::is_BodyDistory(BodyPart body)
{
    switch(body)
    {
    case BodyPart::head:
    {
        return head.get_health() != 0;
    }
    case BodyPart::chest:
    {
        return chest.get_health() != 0;
    }
    case BodyPart::armLeft:
    {
        return armLeft.get_health() != 0;
    }
    case BodyPart::armRight:
    {
        return armRight.get_health() != 0;
    }
    case BodyPart::handLeft:
    {
        return handLeft.get_health() != 0;
    }
    case BodyPart::handRight:
    {
        return handRight.get_health() != 0;
    }
    case BodyPart::leg:
    {
        return leg.get_health() != 0;
    }
    case BodyPart::shoes:
    {
        return shoes.get_health() != 0;
    }
    default:
    {
        return false;
    }
    }
}

quint16 AbstractBody::get_BodyHealth(BodyPart body)
{
    switch(body)
    {
    case BodyPart::head:
    {
        return head.get_health();
    }
    case BodyPart::chest:
    {
        return chest.get_health();
    }
    case BodyPart::armLeft:
    {
        return armLeft.get_health();
    }
    case BodyPart::armRight:
    {
        return armRight.get_health();
    }
    case BodyPart::handLeft:
    {
        return handLeft.get_health();
    }
    case BodyPart::handRight:
    {
        return handRight.get_health();
    }
    case BodyPart::leg:
    {
        return leg.get_health();
    }
    case BodyPart::shoes:
    {
        return shoes.get_health();
    }
    default:
    {
        return false;
    }
    }
}

quint16 AbstractBody::get_BodyHealth_UpLimit(BodyPart body)
{
    switch(body)
    {
    case BodyPart::head:
    {
        return head.get_health_UpLimit();
    }
    case BodyPart::chest:
    {
        return chest.get_health_UpLimit();
    }
    case BodyPart::armLeft:
    {
        return armLeft.get_health_UpLimit();
    }
    case BodyPart::armRight:
    {
        return armRight.get_health_UpLimit();
    }
    case BodyPart::handLeft:
    {
        return handLeft.get_health_UpLimit();
    }
    case BodyPart::handRight:
    {
        return handRight.get_health_UpLimit();
    }
    case BodyPart::leg:
    {
        return leg.get_health_UpLimit();
    }
    case BodyPart::shoes:
    {
        return shoes.get_health_UpLimit();
    }
    default:
    {
        return false;
    }
    }
}

quint16 AbstractBody::get_BodyHealth_DownLimit(BodyPart body)
{
    switch(body)
    {
    case BodyPart::head:
    {
        return head.get_health_DownLimit();
    }
    case BodyPart::chest:
    {
        return chest.get_health_DownLimit();
    }
    case BodyPart::armLeft:
    {
        return armLeft.get_health_DownLimit();
    }
    case BodyPart::armRight:
    {
        return armRight.get_health_DownLimit();
    }
    case BodyPart::handLeft:
    {
        return handLeft.get_health_DownLimit();
    }
    case BodyPart::handRight:
    {
        return handRight.get_health_DownLimit();
    }
    case BodyPart::leg:
    {
        return leg.get_health_DownLimit();
    }
    case BodyPart::shoes:
    {
        return shoes.get_health_DownLimit();
    }
    default:
    {
        return false;
    }
    }
}

void AbstractBody::getBodyDamage(BodyPart body, quint16 damage)
{
    switch(body)
    {
    case BodyPart::head:
    {
        head.getDamage(damage);
    }
    case BodyPart::chest:
    {
        chest.getDamage(damage);
    }
    case BodyPart::armLeft:
    {
        armLeft.getDamage(damage);
    }
    case BodyPart::armRight:
    {
        armRight.getDamage(damage);
    }
    case BodyPart::handLeft:
    {
        handLeft.getDamage(damage);
    }
    case BodyPart::handRight:
    {
        handRight.getDamage(damage);
    }
    case BodyPart::leg:
    {
        leg.getDamage(damage);
    }
    case BodyPart::shoes:
    {
        shoes.getDamage(damage);
    }
    }
}

void AbstractBody::getBodyRecover(BodyPart body, quint16 recover)
{
    switch(body)
    {
    case BodyPart::head:
    {
        head.getDamage(recover);
    }
    case BodyPart::chest:
    {
        chest.getDamage(recover);
    }
    case BodyPart::armLeft:
    {
        armLeft.getDamage(recover);
    }
    case BodyPart::armRight:
    {
        armRight.getDamage(recover);
    }
    case BodyPart::handLeft:
    {
        handLeft.getDamage(recover);
    }
    case BodyPart::handRight:
    {
        handRight.getDamage(recover);
    }
    case BodyPart::leg:
    {
        leg.getDamage(recover);
    }
    case BodyPart::shoes:
    {
        shoes.getDamage(recover);
    }
    }
}

