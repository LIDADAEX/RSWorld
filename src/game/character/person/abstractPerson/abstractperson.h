#ifndef ABSTRACTPERSON_H
#define ABSTRACTPERSON_H

#include "abstractbody.h"
#include <Qstring>

class AbstractPerson
{
public:
    AbstractPerson(QString name);

private:
    QString name;
    AbstractBody body;

};

#endif // ABSTRACTPERSON_H
