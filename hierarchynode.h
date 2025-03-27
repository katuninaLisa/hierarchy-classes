#ifndef HIERARCHYNODE_H
#define HIERARCHYNODE_H
#include "class.h"
#include <QSet>

class HierarchyNode
{
public:
    HierarchyNode();

    Class* pointClass;
    QSet <Class*> parents;
};

#endif // HIERARCHYNODE_H
