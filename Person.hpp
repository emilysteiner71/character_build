#ifndef PERSON_HPP_
#define PERSON_HPP_
#include <string>


class Person {
    private:
        std::string name;
        int age;
    public:
        Person(const std::string &name, int age);
};

#endif