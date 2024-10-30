#include "CppTemplateGenerator.h"

std::string CppTemplateGenerator::generateClassTemplate(const std::string &className) {
    return "class " + className + " {\n"
                                  "public:\n"
                                  "    " + className + "();\n"
                                                       "    ~" + className + "();\n"
                                                                             "};\n";
}

std::string CppTemplateGenerator::generateFunctionTemplate(const std::string &funcName) {
    return "void " + funcName + "() {\n"
                                "    // TODO: Implement function\n"
                                "}\n";
}