#include "classPokemon.h"

//Constructor
Pokemon::Pokemon(std::string name, int attack, int defense, int speed) {
    setPokemonName(name);
    setAttackStat(attack);
    setDefenseStat(defense);
    setSpeedStat(speed);
}

//Getters
        std::string getName() {
            return pokemonName;
        }
        int getAttackStat() {
            return attackStat;
        }
        int getDefenseStat() {
            return defenseStat;
        }
        int getSpeedStat() {
            return speedStat;
        }

        //Setters
        void setPokemonName(std::string name) {
            pokemonName = name;
        }
        void setAttackStat(int x) {
            attackStat = x;
        }
        void setDefenseStat(int x) {
            defenseStat = x;
        }
        void setSpeedStat(int x) {
            speedStat = x;
        }