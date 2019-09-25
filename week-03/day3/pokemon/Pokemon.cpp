#include "pokemon.h"

Pokemon::Pokemon(const std::string& name, const std::string& type, const std::string& effectiveAgainst)
{
    _name = name;
    _type = type;
    _effectiveAgainst = effectiveAgainst;
}

bool Pokemon::isEffectiveAgainst(const Pokemon &anotherPokemon) const
{
    return _effectiveAgainst == anotherPokemon._type;
}