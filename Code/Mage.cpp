#include "Mage.hpp"
#include <string>
#include <iostream>

using namespace std;

Mage::Mage(const std::string &name, int age) : Person(name, age) {
    this->mageScore = 0;
}

Person::characterBuild Mage::getCharacterBuild() const {
    return Person::MAGE;
}

void Mage::setMageDefaultScore() {
    std::string mageType = "MAGE";
    std::vector <std::string> mageSkills = this->skills->getTypeSkills(mageType);
    for (unsigned int i = 0; i< mageSkills.size(); i++) {
        this->skills->setAttributeScore(mageSkills[i], 15);
    }
    this->calculateMageScore();
}

void Mage::calculateMageScore() {
    this->mageScore = 0;
    std::string mageType = "MAGE";
    std::vector <std::string> mageSkills = this->skills->getTypeSkills(mageType);
    for (unsigned int i= 0; i < mageSkills.size(); i++) {
        this->mageScore += this->skills->getSkillScore(mageSkills[i]);
    }
}

int Mage::getMageScore() const {
    return mageScore;
}

Mage::~Mage() {
}