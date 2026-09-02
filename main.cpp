#include <iostream>
#include <sstream>
#include <string>

int main() {

    std::cout   << "Welcome to calc.sh ! (Only 2 Numbers, Only Operations: +, -, *, /)";

    while (true) {
        std::cout << "\n-> ";

        std::string calculation;
        std::getline(std::cin, calculation);

        float zahl1 = 0;
        float zahl2 = 0;
        char operation = ' ';

        std::stringstream ss(calculation);
        ss >> zahl1 >> operation >> zahl2;

        switch (operation) {
            case '+': std::cout << "\033[31m" << zahl1 + zahl2 << "\033[0m"; break;
            case '-': std::cout << "\033[31m" << zahl1 - zahl2 << "\033[0m"; break;
            case '*': std::cout << "\033[31m" << zahl1 * zahl2 << "\033[0m"; break;
            case '/': std::cout << "\033[31m" << zahl1 / zahl2 << "\033[0m"; break;

            default: std::cout << "\033[31m" << "Gng stfu" << "\033[0m"; break;
        }
    }
}