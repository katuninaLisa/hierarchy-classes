#ifndef CLASS_H
#define CLASS_H
#include <QSet>

class Class
{
public:
    Class();

    QString className;
    QSet <Property> properties;

    bool operator==(Class &other);
    int countProp();
};

#endif // CLASS_H
