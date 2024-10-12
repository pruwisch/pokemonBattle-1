#include "classAttack.h"

class Attack {

    //Constructor
    Attack(std::string name, int power, int accuracy, int powerpointMax) {
        setAttackName(name);
        setPower(power);
        setAccuracy(accuracy);
        setPowerPointsMax(powerpointMax);
        setPowerPoints(powerpointMax);
    }

    
    //Getters
    std::string Attack::getAttackName(){
        return attackName;
    }
    int Attack::getPower() {
        return power;
    }
    int Attack::getAccuracy() {
        return 
    }
    int Attack::getPowerPointsMax();
    int Attack::getPowerPoints();

    //Setters
    void Attack::setAttackName(std::string name);
    int Attack::setPower(int);
    int Attack::setAccuracy(int);
    int Attack::setPowerPointsMax(int);
    int Attack::setPowerPoints(int);

    //Methods
    void Attack::minusOnePP();
    bool Attack::checkPP();
    bool Attack::checkHit();

};
