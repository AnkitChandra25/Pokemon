#pragma once
#include "Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Pidgey : public Pokemon {
        private:
            void wingAttack(Pokemon& target);  // Unique move

        public:
            Pidgey();
        };
    }
}
