#ifndef ABSTRACTPERSON_H
#define ABSTRACTPERSON_H

#include "abstractbody.h"
#include "src/game/character/person/abstractAttribute/abstractpersonattribute.h"
#include <Qstring>

class AbstractPerson
{
public:
    AbstractPerson(QString name = "冻梨", AbstractBody body = {}, AbstractPersonAttribute attribute = {});
    ~AbstractPerson();

private:
    QString* name;
    AbstractBody* body;
    AbstractPersonAttribute* attribute;
};

#endif // ABSTRACTPERSON_H
