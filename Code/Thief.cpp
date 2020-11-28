#include "Thief.hpp"
#include <string>
#include <iostream>

using namespace std;

Thief::Thief(const std::string &name, int age) : Person(name, age) {
}

Person::characterBuild Thief::getCharacterBuild() const {
    return Person::THIEF;
}

//To implement
void Thief::setThiefDefaultScore() {
    std::string thiefType = "THIEF";
    std::vector <std::string> thiefSkills = this->skills->getTypeSkills(thiefType);
    for (unsigned int i = 0; i< thiefSkills.size(); i++) {
        this->skills->setAttributeScore(thiefSkills[i], 15);
    }
}

//To implement
int Thief::getThiefScore() const{
    int thiefScore = 0;

    return thiefScore;
}

Thief::~Thief() {
}