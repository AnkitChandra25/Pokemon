#include <string>

// Forward declaration of the enum class PokemonType
enum class PokemonType;


using namespace std;

class Pokemon {
public:
    string name;           // Name of the Pokémon
    PokemonType type;      // Type of the Pokémon (e.g., Fire, Water)
    int health;            // Current health points (HP) of the Pokémon
    int maxHealth;         // Maximum health points (HP) of the Pokémon

    // Default constructor
    Pokemon();

    // Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health);

    // Method to apply damage to the Pokémon
    void takeDamage(int damage);

    // Method to check if the Pokémon has fainted (HP <= 0)
    bool isFainted() const;

    // Method to perform an attack on another Pokémon
    void attack(Pokemon& target);

    // Copy constructor
    Pokemon(const Pokemon& other);

    // Destructor
    ~Pokemon();

    // Another version of attack, potentially overloaded
    void attack();
};
