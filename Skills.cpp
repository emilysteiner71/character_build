#include "Skills.hpp"
#include <string>
#include <iostream>

using namespace std;

Skills::Skills() {
    //Set default skills
    Attributes = {"illusion", "conjuration", "destruction", "restoration", "alteration", "enchanting", "smithing", "heavyArmour", "block",
    "twoHanded", "oneHanded", "archery", "lightArmour", "sneak", "lockpicking", "pickpocket", "speech", "alchemy"};
    for (unsigned int i = 0; i < Attributes.size(); i++) {
        Scores.push_back(0);
    }
    skillTypes = {"MAGE", "MAGE", "MAGE", "MAGE", "MAGE", "MAGE", "WARRIOR", "WARRIOR", "WARRIOR", "WARRIOR", "WARRIOR", "WARRIOR", 
    "THIEF", "THIEF", "THIEF", "THIEF", "THIEF", "THIEF"};
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

/*int Skills::findScore(std::string &attribute) const{
    int index;
    for (unsigned int i = 0; i < Attributes.size(); i++) {
        if (attribute == Attributes[i]) {
            index = i;
            return index;
        }
    }
    cout << "No attributes of that name" << endl;
    return -1;
}*/

/*bool Skills::setScore(std::string &attribute, int newScore) {
    int index = this->findScore(attribute);
    if (index >= 0) {
        Scores[index] = newScore;
        return true;
    }
    return false;
}*/



bool Skills::setAttributeScore(std::string &attribute, int newScore) {
    return false;
}

Skills::~Skills() {
}