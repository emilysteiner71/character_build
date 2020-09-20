#include "Person.hpp"
#include <string>
#include <iostream>

using namespace std;

Person::Person(const std::string &name, int age) : name(name), age(age) {
    XP = 10;
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

Person::characterBuild Person::getCharacterBuild() const {
    return Person::UNDECLARED;
}

void Person::getSkillSet(Skills skillSet) {
    this->skills = skillSet;
}

Person::~Person() {   
}