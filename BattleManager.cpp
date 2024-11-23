#include "BattleManager.hpp"
#include "Player.hpp"
#include "Pokemon.hpp"
#include <iostream>
#include "Utility.hpp"  // Assuming there's a Utility class with waitForEnter method

void BattleManager::handleBattleOutcome(Player& player, bool playerWon) {
    if (playerWon) {
        // Player won the battle
        std::cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    }
    else {
        // Player lost the battle
        std::cout << "Oh no! " << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
        Utility::waitForEnter();
        std::cout << "Game Over.\n";
    }
}
