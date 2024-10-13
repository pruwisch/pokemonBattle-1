#include <iostream>
#include "classPokemon.h"
#include "pokemonPikachu.h"

int main() {
    Pikachu mon1;

    std::cout  << "Pokemon Name: " << mon1.getName() << std::endl;
    std::cout  << "HP max: " << mon1.getHealthPointsMax() << std::endl;
    std::cout  << "HP now: " << mon1.getHealthPoints() << std::endl;
    std::cout  << "Attack Stat: " << mon1.getAttackStat() << std::endl;
    std::cout  << "Defense Stat: " << mon1.getDefenseStat() << std::endl;
    std::cout  << "Speed Stat: " << mon1.getSpeedStat() << std::endl;
    return 0;
}