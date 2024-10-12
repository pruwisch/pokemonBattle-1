#include "classPokemon.h"

//Constructor
Pokemon::Pokemon(std::string name, int attack, int defense, int speed) {
    setPokemonName(name);
    setAttackStat(attack);
    setDefenseStat(defense);
    setSpeedStat(speed);
}

//Getters
std::string Pokemon::getName() {
    return pokemonName;
}
int Pokemon::getAttackStat() {
    return attackStat;
}
int Pokemon::getDefenseStat() {
    return defenseStat;
}
int Pokemon::getSpeedStat() {
    return speedStat;
}

//Setters
void Pokemon::setPokemonName(std::string name) {
    pokemonName = name;
}
void Pokemon::setAttackStat(int x) {
    attackStat = x;
}
void Pokemon::setDefenseStat(int x) {
    defenseStat = x;
}
void Pokemon::setSpeedStat(int x) {
    speedStat = x;
}