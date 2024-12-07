#pragma once
#include <string>
 using namespace std;

enum class PokemonType;

class Pokemon {
    protected:
        string name;        // Name of the Pokémon
        PokemonType type;   // Type of the Pokémon (e.g., Fire, Water)
        int health;         // Current health
        int maxHealth;      // Maximum health
        int attackPower;    // Attack power

    public:
        Pokemon();
        Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);
        Pokemon(const Pokemon& other);

        bool isFainted() const;
        void heal();
        void attack(Pokemon& target);
        void takeDamage(int damage);

    // Getter for health
    int getHealth() const { return health; }

    // Setter for health
    void setHealth(int h) { health = (h >= 0 && h <= maxHealth) ? h : health; }

    // Getter for name
    string getName() const { return name; }

    // Getter for attackPower
    int getAttackPower() const { return attackPower; }

 };

