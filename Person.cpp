#include "Person.hpp"
#include <string>

using namespace std;

Person::Person(const std::string &name, int age) : name(name), age(age) {
    XP = 10;
    illusionScore = 0;
    conjurationScore = 0;
    destructionScore = 0;
    restorationScore = 0;
    alterationScore = 0;
    enchantingScore = 0;
    smithingScore = 0;
    heavyArmourScore = 0;
    blockScore = 0;
    twoHandedScore = 0;
    oneHandedScore = 0;
    archeryScore = 0;
    lightArmourScore = 0;
    sneakScore = 0;
    lockpickingScore = 0;
    pickpocketScore = 0;
    speechScore = 0;
    alchemyScore = 0;
}
