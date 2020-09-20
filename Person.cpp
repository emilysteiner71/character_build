#include "Person.hpp"
#include <string>
#include <iostream>

using namespace std;

Person::Person(const std::string &name, int age) : name(name), age(age) {
    XP = 10;
    Attributes = {"illusion", "conjuration", "destruction", "restoration", "alteration", "enchanting", "smithing", "heavyArmour", "block",
    "twoHanded", "oneHanded", "archery", "lightArmour", "sneak", "lockpicking", "pickpocket", "speech", "alchemy"};
    for (unsigned int i = 0; i < Attributes.size(); i++) {
        Scores.push_back(0);
    }
}

int Person::getAge() const{
    return this->age;
}

std::string Person::getName() const {
    return this->name;
}

int Person::getXP() const {
    return this->XP;
}

int Person::findScore(std::string &attribute) const{
    int index;
    for (unsigned int i = 0; i < Attributes.size(); i++) {
        if (attribute == Attributes[i]) {
            index = i;
            return index;
        }
    }
    cout << "No attributes of that name" << endl;
    return -1;
}

bool Person::setScore(std::string &attribute, int newScore) {
    int index = this->findScore(attribute);
    if (index >= 0) {
        Scores[index] = newScore;
        return true;
    }
    return false;
}
