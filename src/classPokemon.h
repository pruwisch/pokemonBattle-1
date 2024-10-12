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
        Attack move1;
        //Attack move2;
        //Attack move3;
        //Attack move4;

        
    public:
        //Constructor
        Pokemon(std::string name, int hpmax, int hp, int attack, int defense, int speed, Attack m1/*/, Attack m2, Attack m3, Attack m4/*/);

    
        //Getters
        std::string getName();
        int getHealthPointsMax();
        int getHealthPoints();
        int getAttackStat();
        int getDefenseStat();
        int getSpeedStat();
        Attack getMove1();
        //Attack getMove2();
        //Attack getMove3();
        //Attack getMove4();

        //Setters
        void setPokemonName(std::string name);
        void setHealthPointsMax(int x);
        void setHealthPoints(int x);
        void setAttackStat(int x);
        void setDefenseStat(int x);
        void setSpeedStat(int x);
        void setMove1(Attack);
        //void setMove2(Attack);
        //void setMove3(Attack);
        //void setMove4(Attack);
        

};

#endif // CLASSPOKEMON_H