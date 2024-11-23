// BattleManager.cpp
#include "BattleManager.hpp"
#include "BattleState.hpp"
#include <iostream>

void BattleManager::handleBattleOutcome() {
    if (battleState.playerPokemon->isFainted()) {
        // Player's Pokémon has fainted, they lose the battle
        std::cout << battleState.playerPokemon->name << " has fainted! You lose the battle.\n";
    }
    else {
        // Wild Pokémon has fainted, player wins the battle
        std::cout << "You defeated the wild " << battleState.wildPokemon->name << "! Congratulations!\n";
    }
}
