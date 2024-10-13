#include "classPokemon.h"

//Constructor
Pokemon::Pokemon(std::string name, int hpmax, int attack, int defense, int speed) {
    attackArr[1]  {
        {"default", 0, 0, 0}
    }; //Attack("default", 0, 0, 0), Attack("default", 0, 0, 0), Attack("default", 0, 0, 0), Attack("default", 0, 0, 0)
    setPokemonName(name);
    setHealthPointsMax(hpmax);
    setHealthPoints(hpmax);
    setAttackStat(attack);
    setDefenseStat(defense);
    setSpeedStat(speed);
    defaultMove();

}

//Getters
std::string Pokemon::getName() {
    return pokemonName;
}
int Pokemon::getHealthPointsMax() {
    return healthPointsMax;
}
int Pokemon::getHealthPoints() {
    return healthPoints;
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
void Pokemon::setHealthPointsMax(int x) {
    healthPointsMax = x;
}
void Pokemon::setHealthPoints(int x) {
    healthPoints = x;
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

//Methods
void Pokemon::defaultMove() {
    attackArr[0] = Attack("default", 0, 0, 0);
}
