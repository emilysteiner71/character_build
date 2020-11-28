#ifndef THIEF_HPP_
#define THIEF_HPP_
#include "Person.hpp"
#include <string>
#include <vector>

class Thief: public Person {
    private:
        int thiefScore;
        std::string codeName; //to implement

    public:
        Thief(const std::string &name, int age);
        virtual characterBuild getCharacterBuild() const;
        void setThiefDefaultScore();
        void calculateThiefScore();
        int getThiefScore() const;
        virtual ~Thief();
};
#endif