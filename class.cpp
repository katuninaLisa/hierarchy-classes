#include "class.h"

Class::Class() {}

bool Class::operator ==(Class &other)
{
    if (className == other.className)
    {
        if (properties == other.properties)
        {
            return true;
        }
    }
    return false;
}
