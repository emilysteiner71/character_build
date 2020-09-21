#ifndef SKILLS_HPP_
#define SKILLS_HPP_
#include <string>
#include <vector>


class Skills {
    protected:
        std::vector <std::string> Attributes;
        std::vector <std::string> skillTypes;
        std::vector <int> Scores;
        
    public:
        Skills();
        Skills(std::vector <std::string> &Attributes);
        Skills(std::vector <std::string> &Attributes);
        Skills(std::vector <std::string> &Attributes, std::vector <std::string> skillTypes);
        Skills(std::vector <std::string> &Attributes, std::vector <int> Scores);
        Skills(std::vector <std::string> &Attributes, std::vector <int> Scores, std::vector <std::string> skillTypes);
        int findAttributeIndex(std::string &attribute) const;
        bool setAttributeScore(std::string &attribute, int newScore);
        bool addAttribute(std::string &attribute);
        bool setAttributeType(std::string &attribute, std::string &type);
        int getSkillScore(std::string &attribute) const;
        std::string getSkillType(std::string &attribute) const;
        std::vector <std::string*> getTypeSkills(std::string &type) const;
        virtual ~Skills();
};

#endif