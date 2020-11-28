#ifndef MAGE_HPP_
#define MAGE_HPP_
#include "Person.hpp"
#include <string>
#include <vector>

class Mage: public Person {
    private:
        int mageScore;
        std::string codeName; //to implement

    public:
        Mage(const std::string &name, int age);
        virtual characterBuild getCharacterBuild() const;
        void setMageDefaultScore();
        void calculateMageScore();
        int getMageScore() const;
        virtual ~Mage();
};
#endif