#include "Warrior.hpp"
#include <string>
#include <iostream>

using namespace std;

Warrior::Warrior(const std::string &name, int age) : Person(name, age) {
}

Person::characterBuild Warrior::getCharacterBuild() const {
    return Person::WARRIOR;
}

void Warrior::setWarriorDefaultScore() {
    std::string warriorType = "WARRIOR";
    std::vector <std::string> warriorSkills = this->skills->getTypeSkills(warriorType);
    for (unsigned int i = 0; i< warriorSkills.size(); i++) {
        this->skills->setAttributeScore(warriorSkills[i], 15);
    }
    this->calculateWarriorScore();
}

void Warrior::calculateWarriorScore() {
    this->warriorScore = 0;
    std::string warriorType = "WARRIOR";
    std::vector <std::string> warriorSkills = this->skills->getTypeSkills(warriorType);
    for (unsigned int i= 0; i < warriorSkills.size(); i++) {
        this->warriorScore += this->skills->getSkillScore(warriorSkills[i]);
    }
}

int Warrior::getWarriorScore() const {
    return warriorScore;
}

Warrior::~Warrior() {
}