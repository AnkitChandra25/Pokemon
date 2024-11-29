#pragma once
#include "Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Zubat : public Pokemon {
        private:
            void supersonic(Pokemon& target);  // Unique move

        public:
            Zubat();
        };
    }
}
