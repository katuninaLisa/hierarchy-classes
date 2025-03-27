#ifndef HIERARCHY_H
#define HIERARCHY_H
#include <QMap>
#include "hierarchynode.h"

class Hierarchy
{
public:
    Hierarchy();

    QMap <QString, HierarchyNode*> allClasses;
};

#endif // HIERARCHY_H
