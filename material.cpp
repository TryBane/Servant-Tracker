#include "material.h"
#include <QString>

void Material::resetMatsUsed()
{
    totalMatsUsed = 0;
}

int Material::totalNeeded()
{
    return totalMatsNeeded;
}

QString Material::getName()
{
    return name;
}

int Material::getTotalMatsUsed()
{
    return totalMatsUsed;
}

void Material::add( int adjustment )
{
    totalMatsNeeded += adjustment;
}

void Material::subtract( int adjustment )
{
    totalMatsUsed += adjustment;
}

void Material::resetMatsNeeded()
{
    totalMatsNeeded = 0;
}
