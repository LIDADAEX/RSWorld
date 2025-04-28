#ifndef ABSTRACTPERSON_H
#define ABSTRACTPERSON_H

#include "abstractbody.h"
#include "src/game/character/person/abstractAttribute/abstractattribute.h"
#include <Qstring>

class AbstractPerson
{
public:
    AbstractPerson(QString name = "冻梨", AbstractBody body = {}, AbstractAttribute attribute = {});
    ~AbstractPerson();

private:
    QString* name;
    AbstractBody* body;
    AbstractAttribute* attribute;
};

#endif // ABSTRACTPERSON_H
