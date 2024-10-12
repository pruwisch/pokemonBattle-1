#ifndef CLASSPOKEMON_H
#define CLASSPOKEMON_H

#include <string>


class Pokemon {

    private:
        std::string pokemonName;
        int attackStat;
        int defenseStat;
        int speedStat;
        
        
    public:
    //Constructor
        Pokemon(std::string name, int attack, int defense, int speed);

    
        //Getters
        std::string getName();
        int getAttackStat();
        int getDefenseStat();
        int getSpeedStat();

        //Setters
        void setPokemonName(std::string name);
        void setAttackStat(int x);
        void setDefenseStat(int x);
        void setSpeedStat(int x);
        

};

#endif // CLASSPOKEMON_H