#include <vector>
struct Grass;
class Pokemon;

class WildEncounterManager {
public:
    WildEncounterManager();
    Pokemon getRandomPokemonFromGrass(const Grass& grass);
};