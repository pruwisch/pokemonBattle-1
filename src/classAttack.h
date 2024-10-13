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
        Attack();
        Attack(std::string name, int power, int accuracy, int powerpointMax);

    
        //Getters
        std::string getAttackName();
        int getPower();
        int getAccuracy();
        int getPowerPointsMax();
        int getPowerPoints();

        //Setters
        void setAttackName(std::string name);
        void setPower(int);
        void setAccuracy(int);
        void setPowerPointsMax(int);
        void setPowerPoints(int);

        //Methods
        void minusOnePP();
        bool PPleft();
        bool checkHit();

};

#endif // CLASSATTACK_H