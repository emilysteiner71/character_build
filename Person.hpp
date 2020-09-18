#ifndef PERSON_HPP_
#define PERSON_HPP_
#include <string>


class Person {
    private:
        std::string name;
        int age;
        int score;
    public:
        Person(const std::string &name, int age);
};

#endif