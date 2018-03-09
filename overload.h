#ifndef OVERLOAD_H
#define OVERLOAD_H
#pragma once

#include "profile.h"
#include "servant.h"
#include "material.h"
#include <vector>
#include <QDebug>

QDataStream &operator<<( QDataStream &out, const Profile &savingProfile );
QDataStream &operator>>( QDataStream &in, Profile &loadingProfile );

QDataStream &operator<<( QDataStream &out, const Material &savingMaterial );
QDataStream &operator>>( QDataStream &in, Material &loadingMaterial );

QDataStream &operator<<( QDataStream &out, const Servant &savingServant );
QDataStream &operator>>( QDataStream &in, Servant &loadingServant );

QDataStream &operator<<( QDataStream &out, const std::vector<Material> &savingMaterial );
QDataStream &operator>>( QDataStream &in, std::vector<Material> &loadingMaterial );

QDataStream &operator<<( QDataStream &out, const std::vector<Servant> &savingServant );
QDataStream &operator>>( QDataStream &in, std::vector<Servant> &loadingServant );

QDataStream &operator<<( QDataStream &out, const std::vector<int> &skillLevels );
QDataStream &operator>>( QDataStream &in, std::vector<int> &skillLevels );


inline QDataStream &operator<<( QDataStream &out, const Profile &savingProfile )
{
    out << savingProfile.profileName << savingProfile.servants << savingProfile.ownedMaterialList;
    return out;
}

inline QDataStream &operator>>( QDataStream &in, Profile &loadingProfile )
{
    loadingProfile = Profile();
    int padding;
    in >> loadingProfile.profileName >> padding >> loadingProfile.servants >> padding >> loadingProfile.ownedMaterialList;
    return in;
}


inline QDataStream &operator<<( QDataStream &out, const Material &savingMaterial )
{
    out << savingMaterial.name << savingMaterial.totalMatsNeeded;
    return out;
}

inline QDataStream &operator>>( QDataStream &in, Material &loadingMaterial )
{
    loadingMaterial = Material();
    in >> loadingMaterial.name >> loadingMaterial.totalMatsNeeded;
    return in;
}


inline QDataStream &operator<<( QDataStream &out, const Servant &savingServant )
{
    out << savingServant.name << savingServant.level << savingServant.servantClass << savingServant.stars << savingServant.ascension << savingServant.attackFou << savingServant.hpFou << savingServant.npLevel;
    out << savingServant.skill1 << savingServant.skill2 << savingServant.skill3;
    out << savingServant.goalAscensionLevel << savingServant.goalLevel << savingServant.goalSkill1 << savingServant.goalSkill2 << savingServant.goalSkill3;
    return out;
}

inline QDataStream &operator>>( QDataStream &in, Servant &loadingServant )
{
    loadingServant = Servant();

    in >> loadingServant.name;
    in >> loadingServant.level;
    in >> loadingServant.servantClass;
    in >> loadingServant.stars;
    in >> loadingServant.ascension;
    in >> loadingServant.attackFou;
    in >> loadingServant.hpFou;
    in >> loadingServant.npLevel;
    in >> loadingServant.skill1;
    in >> loadingServant.skill2;
    in >> loadingServant.skill3;
    in >> loadingServant.goalAscensionLevel >> loadingServant.goalLevel >> loadingServant.goalSkill1 >> loadingServant.goalSkill2 >> loadingServant.goalSkill3;
    return in;
}


inline QDataStream &operator<<( QDataStream &out, const std::vector<Material> &savingMaterial )
{
    out << savingMaterial.size();
    for( auto materials : savingMaterial )
    {
        out << materials;
    }
    return out;
}

inline QDataStream &operator>>( QDataStream &in, std::vector<Material> &loadingMaterial )
{
    int size = 0;
    Material loadedMaterial = Material();
    in >> size;
    loadingMaterial.reserve(size);
    for(int i = 0; i < size; i++ )
    {
        in >> loadedMaterial;
        loadingMaterial.push_back( loadedMaterial );
    }
    return in;
}


inline QDataStream &operator<<( QDataStream &out, const std::vector<Servant> &savingServant )
{
    size_t size = savingServant.size();
    out << size;
    for( auto servants : savingServant )
    {
        out << servants;
    }
    return out;
}

inline QDataStream &operator>>( QDataStream &in, std::vector<Servant> &loadingServant )
{
    int size = 0;
    in >> size;
    loadingServant.reserve(size);
    for(int i = 0; i < size; i++ )
    {
        Servant loadedServant = Servant();
        in >> loadedServant;
        loadingServant.push_back( loadedServant );
    }
    return in;
}


inline QDataStream &operator<<( QDataStream &out, const std::vector<int> &skillLevels )
{
    out << skillLevels.size();
    for( auto skills : skillLevels )
    {
        out << skills;
    }
    return out;
}

inline QDataStream &operator>>( QDataStream &in, std::vector<int> &skillLevels )
{
    int size = 0;
    in >> size;
    skillLevels.reserve(size);
    for(int i = 0; i < size; i++ )
    {
        int skills = 0;
        in >> skills;
        skillLevels.push_back( skills );
    }
    return in;
}


#endif // OVERLOAD_H
