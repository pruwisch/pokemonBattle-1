#include "classAttack.h"

//Constructor
Attack::Attack() {};

Attack::Attack(std::string name, int pwr, int acc, int ppmax) {
    setAttackName(name);
    setPower(pwr);
    setAccuracy(acc);
    setPowerPointsMax(ppmax);
    setPowerPoints(ppmax);
}

    
//Getters
std::string Attack::getAttackName(){
    return attackName;
}
int Attack::getPower() {
    return power;
}
int Attack::getAccuracy() {
    return accuracy;
}
int Attack::getPowerPointsMax() {
    return powerPointsMax;
}
int Attack::getPowerPoints() {
    return powerPoints;
}

//Setters
void Attack::setAttackName(std::string name) {
    attackName = name;
}
void Attack::setPower(int pwr) {
    power = pwr;
}
void Attack::setAccuracy(int acc) {
    accuracy = acc;
}
void Attack::setPowerPointsMax(int ppmax) {
    powerPointsMax = ppmax;
}
void Attack::setPowerPoints(int pp) {
    powerPoints = pp;
}

//Methods
void Attack::minusOnePP() {
    setPowerPoints(powerPoints -1);
}
bool Attack::PPleft() {
    return (powerPoints > 0);
}

bool Attack::checkHit() {
    return true;
}


