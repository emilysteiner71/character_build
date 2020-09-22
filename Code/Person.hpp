#ifndef PERSON_HPP_
#define PERSON_HPP_
#include <string>
#include <vector>
#include "Skills.hpp"


class Person {
    protected:
        std::string name;
        int age;
        int XP;
        Skills skills;
        
    public:
        enum characterBuild {THIEF, WARRIOR, MAGE, UNDECLARED};
        Person(const std::string &name, int age);
        std::string getName() const;
        int getAge() const;
        int getXP() const;
        virtual characterBuild getCharacterBuild() const;
        void getSkillSet(Skills skillSet);
        virtual ~Person();
};

#endif