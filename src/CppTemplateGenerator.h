#ifndef CPPTEMPLATEGENERATOR_H
#define CPPTEMPLATEGENERATOR_H

#include <string>

class CppTemplateGenerator {
public:
    static std::string generateClassTemplate(const std::string &className);
    static std::string generateFunctionTemplate(const std::string &funcName);
};

#endif