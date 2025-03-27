#ifndef PROPERTY_H
#define PROPERTY_H
#include <QString>
#include <QVector>

class Property
{
public:
    Property();

    QString propertyName;
    QVector <int> value;

    int comparison(Property &other);
    bool operator==(const Property& other) const;
    bool valuePropertyExist(Property& other);

};

#endif // PROPERTY_H
