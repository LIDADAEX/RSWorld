#include "abstractattribute.h"

AbstractAttribute::AbstractAttribute(quint16 attack, quint16 attackUpLimit, quint16 attackDownLimit,
    quint16 defead, quint16 defeadUpLimit, quint16 defeadDownLimit) :
    attack(attack), attackUpLimit(attackUpLimit), attackDownLimit(attackDownLimit),
    defead(defead), defeadUpLimit(defeadUpLimit), defeadDownLimit(defeadDownLimit){}

quint16 AbstractAttribute::get_Attribute(Attribute attributeName)
{
    switch(attributeName)
    {
    case Attribute::attack:
    {
        return attack;
    }
    case Attribute::defead:
    {
        return defead;
    }
    default:
        return 0;
    }
}

quint16 AbstractAttribute::get_Attribute_Limit(Attribute attributeName, AttributeLimit LimitName)
{
    switch(attributeName)
    {
    case Attribute::attack:
    {
        switch(LimitName)
        {
        case upLimit:
        {
            return attackUpLimit;
        }
        break;
        case downLimit:
        {
            return attackDownLimit;
        }
        break;
        default:
            return 0;
        }
    }
    break;
    case Attribute::defead:
    {
        switch(LimitName)
        {
        case upLimit:
        {
            return defeadUpLimit;
        }
        break;
        case downLimit:
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

void AbstractAttribute::set_Attribute(Attribute attributeName, quint16 number)
{
    switch(attributeName)
    {
    case Attribute::attack:
    {
        attack = number;
    }
    break;
    case Attribute::defead:
    {
        defead = number;
    }
    break;
    }
}

bool AbstractAttribute::add_Attribute(Attribute attributeName, quint16 addition)
{
    switch(attributeName)
    {
    case Attribute::attack:
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
    case Attribute::defead:
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

bool AbstractAttribute::sub_Attribute(Attribute attributeName, quint16 subtraction)
{
    switch(attributeName)
    {
    case Attribute::attack:
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
    case Attribute::defead:
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

void AbstractAttribute::set_Attribute_Limit(Attribute attributeName, AttributeLimit LimitName, quint16 number)
{
    switch(attributeName)
    {
    case Attribute::attack:
    {
        switch(LimitName)
        {
        case AttributeLimit::upLimit:
        {
            attackUpLimit = number;
        }
        break;
        case AttributeLimit::downLimit:
        {
            attackDownLimit = number;
        }
        break;
        }
    }
    break;
    case Attribute::defead:
    {
        switch(LimitName)
        {
        case AttributeLimit::upLimit:
        {
            defeadUpLimit = number;
        }
        break;
        case AttributeLimit::downLimit:
        {
            defeadDownLimit = number;
        }
        break;
        }
    }
    break;
    }
}

void AbstractAttribute::add_Attribute_Limit(Attribute attributeName, AttributeLimit LimitName, quint16 addition)
{
    switch(attributeName)
    {
    case Attribute::attack:
    {
        switch(LimitName)
        {
        case AttributeLimit::upLimit:
        {
            qint32 temp = attackUpLimit + addition;
            if(temp <= 65535)
                attackUpLimit = temp;
            else
                attackUpLimit = 65535;
        }
        break;
        case AttributeLimit::downLimit:
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
    case Attribute::defead:
    {
        switch(LimitName)
        {
        case AttributeLimit::upLimit:
        {
            qint32 temp = defeadDownLimit + addition;
            if(temp <= 65535)
                defeadDownLimit = temp;
            else
                defeadDownLimit = 65535;
        }
        break;
        case AttributeLimit::downLimit:
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

void AbstractAttribute::sub_Attribute_Limit(Attribute attributeName, AttributeLimit LimitName, quint16 subtraction)
{
    switch(attributeName)
    {
    case Attribute::attack:
    {
        switch(LimitName)
        {
        case AttributeLimit::upLimit:
        {
            qint32 temp = attackUpLimit - subtraction;
            if(temp >= 0)
                attackUpLimit = temp;
            else
                attackUpLimit = 0;
        }
        break;
        case AttributeLimit::downLimit:
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
    case Attribute::defead:
    {
        switch(LimitName)
        {
        case AttributeLimit::upLimit:
        {
            qint32 temp = defeadDownLimit - subtraction;
            if(temp >= 0)
                defeadDownLimit = temp;
            else
                defeadDownLimit = 0;
        }
        break;
        case AttributeLimit::downLimit:
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
