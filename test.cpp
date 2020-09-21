#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
using namespace std;

#include "Person.hpp"
#include "Thief.hpp"
#include "Skills.hpp"

int main() {
    Person *Jerry = new Person("Jerry", 19);
    cout << Jerry->getAge() << endl;
    delete Jerry;
    return 0;
}