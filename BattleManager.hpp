#pragma once
#include "BattleState.hpp"
class Player;
class Pokemon;

class BattleManager {
public:
    void startBattle(Player& player, Pokemon& wildPokemon);
private:
    BattleState battleState;

    void battle();
    void handleBattleOutcome();
    void updateBattleState();
};