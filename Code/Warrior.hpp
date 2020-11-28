#ifndef WARRIOR_HPP_
#define WARRIOR_HPP_
#include "Person.hpp"
#include <string>
#include <vector>

class Warrior: public Person {
    private:
        int warriorScore;

    public:
        Warrior(const std::string &name, int age);
        virtual characterBuild getCharacterBuild() const;
        void setWarriorDefaultScore();
        void calculateWarriorScore();
        int getWarriorScore() const;
        virtual ~Warrior();
};
#endif