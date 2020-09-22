#include "Skills.hpp"
#include <string>
#include <iostream>

using namespace std;

Skills::Skills() {
    //Set default skills
    std::vector <std::string> attributeList = { "illusion", "conjuration", "destruction", "restoration", "alteration", "enchanting", "smithing", "heavyArmour", "block","twoHanded", "oneHanded", "archery", "lightArmour", "sneak", "lockpicking", "pickpocket", "speech", "alchemy" };
    Attributes = attributeList;
    for (unsigned int i = 0; i < Attributes.size(); i++) {
        Scores.push_back(0);
    }
    skillTypes = { "MAGE", "MAGE", "MAGE", "MAGE", "MAGE", "MAGE", "WARRIOR", "WARRIOR", "WARRIOR", "WARRIOR", "WARRIOR", "WARRIOR", "THIEF", "THIEF", "THIEF", "THIEF", "THIEF", "THIEF" };
}

Skills::Skills(std::vector <std::string> &Attributes) {
    this->Attributes = Attributes;
    for (unsigned int i = 0; i < Attributes.size(); i++) {
        Scores.push_back(0);
        skillTypes.push_back("NULL");
    }
}

Skills::Skills(std::vector <std::string> &Attributes, std::vector <std::string> skillTypes) {
    this->Attributes = Attributes;
    this->skillTypes = skillTypes;
    for (unsigned int i = 0; i < Attributes.size(); i++) {
        Scores.push_back(0);
    }
}

Skills::Skills(std::vector <std::string> &Attributes, std::vector <int> Scores) {
    this->Attributes = Attributes;
    this->Scores = Scores;
    for (unsigned int i = 0; i < Attributes.size(); i++) {
        skillTypes.push_back("NULL");
    }
}

Skills::Skills(std::vector <std::string> &Attributes, std::vector <int> Scores, std::vector <std::string> skillTypes) {
    this->Attributes = Attributes;
    this->skillTypes = skillTypes;
    this->Scores = Scores;
}

int Skills::findAttributeIndex(std::string &attribute) const{
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

bool Skills::setAttributeScore(std::string &attribute, int newScore) {
    int index = this->findAttributeIndex(attribute);
    if (index >= 0) {
        Scores[index] = newScore;
        return true;
    }
    return false;
}

bool Skills::addAttribute(std::string &attribute) {
    int index = this->findAttributeIndex(attribute);
    if (index == -1) {
        Attributes.push_back(attribute);
        return true;
    }
    return false;
}

bool Skills::setAttributeType(std::string &attribute, std::string &type) {
    int index = this->findAttributeIndex(attribute);
    if (index >= 0) {
        skillTypes[index] = type;
        return true;
    }
    return false;
}

int Skills::getSkillScore(std::string &attribute) const {
    int index = this->findAttributeIndex(attribute);
    if (index >= 0) {
        return Scores[index];
    }
    return -1;
}

std::string Skills::getSkillType(std::string &attribute) const {
    int index = this->findAttributeIndex(attribute);
    if (index >= 0) {
        return skillTypes[index];
    }
    return NULL;
}

Skills::~Skills() {
}