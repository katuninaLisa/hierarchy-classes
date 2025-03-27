#include "property.h"

Property::Property() {}

int Property::comparison(Property& other)
{
    if (propertyName == other.propertyName)
    {
        if (value == other.value && (value.size() != 0 || other.value.size() != 0))
        {
            return 2;
        }
        return 1;
    }
    return 0;
}

bool Property::operator==(const Property& other) const {
    return propertyName == other.propertyName && value == other.value;
}

bool Property::valuePropertyExist(Property& other)
{
    if (value.size() != 0 && other.value.size() != 0)
        return true;
    return false;
}
