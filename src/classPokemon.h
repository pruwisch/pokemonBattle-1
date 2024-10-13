#ifndef CLASSPOKEMON_H
#define CLASSPOKEMON_H

#include <string>
#include "classAttack.h"


class Pokemon {

    private:
        std::string pokemonName;
        int healthPointsMax;
        int healthPoints;
        int attackStat;
        int defenseStat;
        int speedStat;
        Attack attackArr[4];

        
    public:
        //Constructor
        Pokemon(std::string name, int hpmax, int attack, int defense, int speed);

    
        //Getters
        std::string getName();
        int getHealthPointsMax();
        int getHealthPoints();
        int getAttackStat();
        int getDefenseStat();
        int getSpeedStat();


        //Setters
        void setPokemonName(std::string name);
        void setHealthPointsMax(int x);
        void setHealthPoints(int x);
        void setAttackStat(int x);
        void setDefenseStat(int x);
        void setSpeedStat(int x);

        void defaultMove();
        
};

#endif // CLASSPOKEMON_H