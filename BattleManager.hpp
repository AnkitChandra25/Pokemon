// BattleManager.hpp
#include "BattleState.hpp"
#include "Player.hpp"
#include "Pokemon.hpp"

class BattleManager {
public:
    void startBattle(Player& player, Pokemon& wildPokemon);
private:
    BattleState battleState;  // New BattleState object to track the battle

    void battle();
    void handleBattleOutcome();
    void updateBattleState(); // Method to update the battle state after each turn
};
