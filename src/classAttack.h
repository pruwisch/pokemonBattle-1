#ifndef CLASSATTACK_H
#define CLASSATTACK_H

#include <string>


class Attack {

    private:
        std::string attackName;
        int power;
        int accuracy;
        int powerPointsMax;
        int powerPoints;
        
        
    public:
        //Constructor
        Attack(std::string name, int power, int accuracy, int powerpointMax);

    
        //Getters
        std::string getAttackName();
        int getPower();
        int getAccuracy();
        int getPowerPointsMax();
        int getPowerPoints();

        //Setters
        void setAttackName(std::string name);
        int setPower(int);
        int setAccuracy(int);
        int setPowerPointsMax(int);
        int setPowerPoints(int);

        //Methods
        void minusOnePP();
        bool checkPP();
        bool checkHit();

};

#endif // CLASSATTACK_H