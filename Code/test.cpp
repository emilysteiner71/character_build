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
    Thief *Jerry = new Thief("Jerry", 19);
    cout << Jerry->getAge() << endl;
    Jerry->setThiefDefaultScore();
    cout << "Jerry has a thief score of " << Jerry->getThiefScore() << endl;
    delete Jerry;
    return 0;
}