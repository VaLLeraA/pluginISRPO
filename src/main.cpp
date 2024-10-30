#include "CppTemplateGenerator.h"
#include <iostream>

int main() {
    std::string className;
    std::cout << "Введите имя класса: ";
    std::getline(std::cin, className);

    std::string classTemplate = CppTemplateGenerator::generateClassTemplate(className);
    std::cout << "Сгенерированный класс:\n" << classTemplate << std::endl;

    std::string funcName;
    std::cout << "Введите имя функции: ";
    std::getline(std::cin, funcName);

    std::string functionTemplate = CppTemplateGenerator::generateFunctionTemplate(funcName);
    std::cout << "Сгенерированная функция:\n" << functionTemplate << std::endl;

    return 0;
}
