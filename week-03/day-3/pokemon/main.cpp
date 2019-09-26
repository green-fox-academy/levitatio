#include <iostream>
#include <vector>

#include "pokemon.h"


std::vector<Pokemon> initializePokemons()
{
    std::vector<Pokemon> pokemons;

    pokemons.push_back(Pokemon("Balbasaur", "leaf", "water"));
    pokemons.push_back(Pokemon("Pikatchu", "electric", "water"));
    pokemons.push_back(Pokemon("Charizard", "fire", "leaf"));
    pokemons.push_back(Pokemon("Balbasaur", "water", "fire"));
    pokemons.push_back(Pokemon("Kingler", "water", "fire"));

    return pokemons;
}

Pokemon searchEffectiveAgainst (const std::vector<Pokemon> &listOfPokemon, const Pokemon &enemyPokemon) {
    for (int i = 0; i < listOfPokemon.size(); ++i) {
        if (listOfPokemon.at(i).isEffectiveAgainst(enemyPokemon)) {
            return listOfPokemon.at(i);
        }

    }
}

int main(int argc, char* args[])
{
    std::vector<Pokemon> pokemonOfAsh = initializePokemons();

    // Every pokemon has a name and a type.
    // Certain types are effective against others, e.g. water is effective against fire.

    // Ash has a few pokemon.
    // A wild pokemon appeared!

    Pokemon wildPokemon("Oddish", "leaf", "water");

    // Which pokemon should Ash use?



    std::cout << "I choose You, " << searchEffectiveAgainst(pokemonOfAsh, wildPokemon)._name << std::endl;
    return 0;
}