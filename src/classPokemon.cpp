#include "classPokemon.h"

//Constructor
Pokemon::Pokemon(std::string name, int hpmax, int attack, int defense, int speed) /*/Attack m1, Attack m2, Attack m3, Attack m4/*/ {
    setPokemonName(name);
    setHealthPointsMax(hpmax);
    setHealthPoints(hpmax);
    setAttackStat(attack);
    setDefenseStat(defense);
    setSpeedStat(speed);
    //setMove1(m1);
    //setMove2(m2);
    //setMove3(m3);
    //setMove4(m4);
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
/*/Attack Pokemon::getMove1() {
    return move1;
}
Attack getMove2() {
    return move2;
}
Attack getMove3() {
    return move3;
}
Attack getMove4() {
    return move4;
}/*/

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
/*/void Pokemon::setMove1(Attack move) {
    move1 = move;
}
void Pokemon::setMove2(Attack move) {
    move2 = move;
}
void Pokemon::setMove3(Attack move) {
    move3 = move;
}
void Pokemon::setMove4(Attack move) {
    move4 = move;
}/*/