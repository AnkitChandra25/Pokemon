#include <string>

// Forward declaration of the enum class PokemonType
enum class PokemonType;


using namespace std;

class Pokemon {
public:
    string name;           // Name of the Pok�mon
    PokemonType type;      // Type of the Pok�mon (e.g., Fire, Water)
    int health;            // Current health points (HP) of the Pok�mon
    int maxHealth;         // Maximum health points (HP) of the Pok�mon

    // Default constructor
    Pokemon();

    // Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health);

    // Method to apply damage to the Pok�mon
    void takeDamage(int damage);

    // Method to check if the Pok�mon has fainted (HP <= 0)
    bool isFainted() const;

    // Method to perform an attack on another Pok�mon
    void attack(Pokemon& target);

    // Copy constructor
    Pokemon(const Pokemon& other);

    // Destructor
    ~Pokemon();

    // Another version of attack, potentially overloaded
    void attack();
};
