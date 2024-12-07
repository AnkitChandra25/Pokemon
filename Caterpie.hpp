#pragma once
#include "Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Caterpie : public Pokemon {
        private:
            void bugBite(Pokemon& target);  // Unique move

        public:
            Caterpie();
        };
    }
}
