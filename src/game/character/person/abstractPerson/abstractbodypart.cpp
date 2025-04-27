#include "abstractbodypart.h"

AbstractBodyPart::AbstractBodyPart() {}

BodyPart AbstractBodyPart::get_bodyPartName()
{
    return bodyPartName;
}

quint16 AbstractBodyPart::get_health()
{
    return health;
}

quint16 AbstractBodyPart::get_health_UpLimit()
{
    return healthUpLimit;
}

quint16 AbstractBodyPart::get_health_DownLimit()
{
    return healthDownLimit;
}

Item AbstractBodyPart::get_Equipment()
{
    return Equipment;
}

void AbstractBodyPart::getDamage(quint16 damage)
{
    qint32 calTemp = health - damage;
    if(calTemp < healthDownLimit)
        health = healthDownLimit;
    else
        health = calTemp;
}

void AbstractBodyPart::getRecover(quint16 recover)
{
    qint32 calTemp = health + recover;
    if(calTemp > healthUpLimit)
        health = healthUpLimit;
    else
        health = calTemp;
}
