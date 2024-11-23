#pragma once
#include <string>
#include "PokemonType.hpp"

using namespace std;

class Pokemon {
public:
    string name;           // Name of the Pokémon
    PokemonType type;      // Type of the Pokémon (e.g., Fire, Water)
    int health;            // Current health points (HP) of the Pokémon
    int maxHealth;         // Maximum health points (HP) of the Pokémon
    int attackPower;       // New attribute for attack power

    // Parameterized constructor to initialize name, type, max health, and attack power
    Pokemon(std::string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower)
        : name(p_name), type(p_type), maxHealth(p_maxHealth), health(p_maxHealth), attackPower(p_attackPower) {}

    // Method to apply damage to the Pokémon
    void takeDamage(int damage);

    // Method to check if the Pokémon has fainted (HP <= 0)
    bool isFainted() const;

    // Method to restore HP to max health
    void heal();

    // Attack method to perform an attack on another Pokémon
    void attack(Pokemon& target);
};
