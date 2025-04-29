#include "AbstractPersonAttribute.h"

AbstractPersonAttribute::AbstractPersonAttribute(quint16 attack, quint16 attackUpLimit, quint16 attackDownLimit,
    quint16 defead, quint16 defeadUpLimit, quint16 defeadDownLimit) :
    attack(attack), attackUpLimit(attackUpLimit), attackDownLimit(attackDownLimit),
    defead(defead), defeadUpLimit(defeadUpLimit), defeadDownLimit(defeadDownLimit){}

quint16 AbstractPersonAttribute::get_Attribute(person::Attribute attributeName)
{
    switch(attributeName)
    {
    case person::Attribute::attack:
    {
        return attack;
    }
    case person::Attribute::defead:
    {
        return defead;
    }
    default:
        return 0;
    }
}

quint16 AbstractPersonAttribute::get_Attribute_Limit(person::Attribute attributeName, person::AttributeLimit LimitName)
{
    switch(attributeName)
    {
    case person::Attribute::attack:
    {
        switch(LimitName)
        {
        case person::upLimit:
        {
            return attackUpLimit;
        }
        break;
        case person::downLimit:
        {
            return attackDownLimit;
        }
        break;
        default:
            return 0;
        }
    }
    break;
    case person::Attribute::defead:
    {
        switch(LimitName)
        {
        case person::upLimit:
        {
            return defeadUpLimit;
        }
        break;
        case person::downLimit:
        {
            return defeadDownLimit;
        }
        break;
        default:
            return 0;
        }
    }
    break;
    default:
        return 0;
    }
}

void AbstractPersonAttribute::set_Attribute(person::Attribute attributeName, quint16 number)
{
    switch(attributeName)
    {
    case person::Attribute::attack:
    {
        attack = number;
    }
    break;
    case person::Attribute::defead:
    {
        defead = number;
    }
    break;
    }
}

bool AbstractPersonAttribute::add_Attribute(person::Attribute attributeName, quint16 addition)
{
    switch(attributeName)
    {
    case person::Attribute::attack:
    {
        qint32 temp = attack + addition;
        if(temp < attackUpLimit)
        {
            attack = temp;
            return 1;
        }
        else
        {
            attack = attackUpLimit;
            return 0;
        }
    }
    case person::Attribute::defead:
    {
        qint32 temp = defead + addition;
        if(temp < defeadUpLimit)
        {
            defead = temp;
            return 1;
        }
        else
        {
            defead = defeadUpLimit;
            return 0;
        }
    }
    default:
        return 0;
    }
}

bool AbstractPersonAttribute::sub_Attribute(person::Attribute attributeName, quint16 subtraction)
{
    switch(attributeName)
    {
    case person::Attribute::attack:
    {
        qint32 temp = attack - subtraction;
        if(temp > attackDownLimit)
        {
            attack = temp;
            return 1;
        }
        else
        {
            attack = attackDownLimit;
            return 0;
        }
    }
    case person::Attribute::defead:
    {
        qint32 temp = defead - subtraction;
        if(temp > defeadDownLimit)
        {
            defead = temp;
            return 1;
        }
        else
        {
            defead = defeadDownLimit;
            return 0;
        }
    }
    default:
        return 0;
    }
}

void AbstractPersonAttribute::set_Attribute_Limit(person::Attribute attributeName, person::AttributeLimit LimitName, quint16 number)
{
    switch(attributeName)
    {
    case person::Attribute::attack:
    {
        switch(LimitName)
        {
        case person::AttributeLimit::upLimit:
        {
            attackUpLimit = number;
        }
        break;
        case person::AttributeLimit::downLimit:
        {
            attackDownLimit = number;
        }
        break;
        }
    }
    break;
    case person::Attribute::defead:
    {
        switch(LimitName)
        {
        case person::AttributeLimit::upLimit:
        {
            defeadUpLimit = number;
        }
        break;
        case person::AttributeLimit::downLimit:
        {
            defeadDownLimit = number;
        }
        break;
        }
    }
    break;
    }
}

void AbstractPersonAttribute::add_Attribute_Limit(person::Attribute attributeName, person::AttributeLimit LimitName, quint16 addition)
{
    switch(attributeName)
    {
    case person::Attribute::attack:
    {
        switch(LimitName)
        {
        case person::AttributeLimit::upLimit:
        {
            qint32 temp = attackUpLimit + addition;
            if(temp <= 65535)
                attackUpLimit = temp;
            else
                attackUpLimit = 65535;
        }
        break;
        case person::AttributeLimit::downLimit:
        {
            qint32 temp = attackDownLimit + addition;
            if(temp <= 65535)
                attackDownLimit = temp;
            else
                attackDownLimit = 65535;
        }
        break;
        }
    }
    break;
    case person::Attribute::defead:
    {
        switch(LimitName)
        {
        case person::AttributeLimit::upLimit:
        {
            qint32 temp = defeadDownLimit + addition;
            if(temp <= 65535)
                defeadDownLimit = temp;
            else
                defeadDownLimit = 65535;
        }
        break;
        case person::AttributeLimit::downLimit:
        {
            qint32 temp = defeadDownLimit + addition;
            if(temp <= 65535)
                defeadDownLimit = temp;
            else
                defeadDownLimit = 65535;
        }
        break;
        }
    }
    break;
    }
}

void AbstractPersonAttribute::sub_Attribute_Limit(person::Attribute attributeName, person::AttributeLimit LimitName, quint16 subtraction)
{
    switch(attributeName)
    {
    case person::Attribute::attack:
    {
        switch(LimitName)
        {
        case person::AttributeLimit::upLimit:
        {
            qint32 temp = attackUpLimit - subtraction;
            if(temp >= 0)
                attackUpLimit = temp;
            else
                attackUpLimit = 0;
        }
        break;
        case person::AttributeLimit::downLimit:
        {
            qint16 temp = attackDownLimit - subtraction;
            if(temp >= 0)
                attackDownLimit = temp;
            else
                attackDownLimit = 0;
        }
        break;
        }
    }
    break;
    case person::Attribute::defead:
    {
        switch(LimitName)
        {
        case person::AttributeLimit::upLimit:
        {
            qint32 temp = defeadDownLimit - subtraction;
            if(temp >= 0)
                defeadDownLimit = temp;
            else
                defeadDownLimit = 0;
        }
        break;
        case person::AttributeLimit::downLimit:
        {
            qint32 temp = defeadDownLimit - subtraction;
            if(temp >= 0)
                defeadDownLimit = temp;
            else
                defeadDownLimit = 0;
        }
        break;
        }
    }
    break;
    }
}
