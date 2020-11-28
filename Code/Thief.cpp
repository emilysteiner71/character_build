#include "Thief.hpp"
#include <string>
#include <iostream>

using namespace std;

Thief::Thief(const std::string &name, int age) : Person(name, age) {
    this->thiefScore = 0;
}

Person::characterBuild Thief::getCharacterBuild() const {
    return Person::THIEF;
}

void Thief::setThiefDefaultScore() {
    std::string thiefType = "THIEF";
    std::vector <std::string> thiefSkills = this->skills->getTypeSkills(thiefType);
    for (unsigned int i = 0; i< thiefSkills.size(); i++) {
        this->skills->setAttributeScore(thiefSkills[i], 15);
    }
    this->calculateThiefScore();
}

void Thief::calculateThiefScore() {
    this->thiefScore = 0;
    std::string thiefType = "THIEF";
    std::vector <std::string> thiefSkills = this->skills->getTypeSkills(thiefType);
    for (unsigned int i= 0; i < thiefSkills.size(); i++) {
        this->thiefScore += this->skills->getSkillScore(thiefSkills[i]);
    }
}

int Thief::getThiefScore() const {
    return thiefScore;
}

Thief::~Thief() {
}