#ifndef PERSON_HPP_
#define PERSON_HPP_
#include <string>
#include <vector>


class Person {
    protected:
        std::string name;
        int age;
        int XP;
        std::vector <std::string> Attributes;
        std::vector <int> Scores;
        
    public:
        Person(const std::string &name, int age);
        std::string getName() const;
        int getAge() const;
        int getXP() const;
        bool setScore(std::string &attribute, int newScore);
        int findScore(std::string &attribute) const;
};

#endif