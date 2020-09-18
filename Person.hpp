#ifndef PERSON_HPP_
#define PERSON_HPP_
#include <string>


class Person {
    private:
        std::string name;
        int age;
        int XP;
        int illusionScore;
        int conjurationScore;
        int destructionScore;
        int restorationScore;
        int alterationScore;
        int enchantingScore;
        int smithingScore;
        int heavyArmourScore;
        int blockScore;
        int twoHandedScore;
        int oneHandedScore;
        int archeryScore;
        int lightArmourScore;
        int sneakScore;
        int lockpickingScore;
        int pickpocketScore;
        int speechScore;
        int alchemyScore;
        
    public:
        Person(const std::string &name, int age);
        std::string getName() const;
        int getAge() const;
        int getXP() const;
};

#endif