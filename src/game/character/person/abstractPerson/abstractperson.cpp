#include "abstractperson.h"

AbstractPerson::AbstractPerson(QString name, AbstractBody body, AbstractAttribute attribute)
{
    AbstractPerson::name = new QString(name);
    AbstractPerson::body = new AbstractBody(body);
    AbstractPerson::attribute = new AbstractAttribute(attribute);
}

AbstractPerson::~AbstractPerson()
{
    delete name;
    delete body;
    delete attribute;
}
