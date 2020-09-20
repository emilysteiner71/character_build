#ifndef SKILLS_HPP_
#define SKILLS_HPP_
#include <string>
#include <vector>

class Skills {
    private:
        std::vector <std::string> Attributes;
        std::vector <int> Scores;
        std::vector <std::string> skillTypes;

    public:
        Skills();
        Skills(std::vector <std::string> &Attributes);
        Skills(std::vector <std::string> &Attributes, std::vector <std::string> skillTypes);
        Skills(std::vector <std::string> &Attributes, std::vector <int> Scores, std::vector <std::string> skillTypes)
        int findScore(std::string &attribute) const;
        bool setAttributeScore(std::string &attribute, int newScore);
        int findAttributeIndex(std::string &attribute) const;
        virtual ~Skills();
};
#endif