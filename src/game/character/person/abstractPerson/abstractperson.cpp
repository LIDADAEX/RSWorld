#include "abstractperson.h"

AbstractPerson::AbstractPerson(QString name, AbstractBody body, AbstractPersonAttribute attribute)
{
    AbstractPerson::name = new QString(name);
    AbstractPerson::body = new AbstractBody(body);
    AbstractPerson::attribute = new AbstractPersonAttribute(attribute);
}

AbstractPerson::~AbstractPerson()
{
    delete name;
    delete body;
    delete attribute;
}
