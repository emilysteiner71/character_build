#include "Thief.hpp"
#include <string>
#include <iostream>

using namespace std;

Thief::Thief(const std::string &name, int age) : Person(name, age) {
}

Person::characterBuild Thief::getCharacterBuild() const {
    return Person::THIEF;
}

int Thief::getThiefScore() const{
    int thiefScore = 0;
    return thiefScore;
}

Thief::~Thief() {
}