#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include <iostream>

using namespace std;

// Default constructor
Pokemon::Pokemon() {
    name = "Unknown";
    type = PokemonType::NORMAL; // Assuming NORMAL is a valid type in your PokemonType enum
    health = 50;
    maxHealth = 50; // Default max health matches initial health
}

// Parameterized constructor
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health) {
    name = p_name;
    type = p_type;
    health = p_health;
    maxHealth = p_health; // Set max health to the initial health
}

// Copy constructor
Pokemon::Pokemon(const Pokemon& other) {
    name = other.name;
    type = other.type;
    health = other.health;
    maxHealth = other.maxHealth; // Copy maxHealth as well
}

// Destructor
Pokemon::~Pokemon() {
    // Destructor logic (if any) goes here
}

// Method to apply damage to the Pokémon
void Pokemon::takeDamage(int damage) {
    health -= damage; // Reduce HP by the damage amount
    if (health < 0) {
        health = 0; // Ensure HP doesn't go below 0
    }
}

// Method to check if the Pokémon has fainted
bool Pokemon::isFainted() const {
    return health <= 0; // Return true if HP is 0 or less
}

// Attack method to perform an attack on another Pokémon
void Pokemon::attack(Pokemon& target) {
    int damage = 10; // Fixed damage for simplicity
    cout << name << " attacks " << target.name << " for " << damage << " damage!\n";
    target.takeDamage(damage); // Apply damage to the target Pokémon
}

// Example attack method (without target)
void Pokemon::attack() {
    cout << name << " attacks with a powerful move!\n";
}

// Battle function to simulate a battle between the player and a wild Pokémon
void battle(Pokemon& playerPokemon, Pokemon& wildPokemon) {
    cout << "A wild " << wildPokemon.name << " appeared!\n";

    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
        playerPokemon.attack(wildPokemon); // Player attacks first

        if (!wildPokemon.isFainted()) {
            wildPokemon.attack(playerPokemon); // Wild Pokémon attacks back
        }
    }

    if (playerPokemon.isFainted()) {
        cout << playerPokemon.name << " has fainted! You lose the battle.\n";
    }
    else {
        cout << "You defeated the wild " << wildPokemon.name << "!\n";
    }
}
