#include <iostream>
#include <cmath>

int main() {
    // Aufgabe 7.1
    std::cout << "Aufgabe 7.1" << std::endl;
    for (int i           = 0; i < 4; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "+";
        }
        std::cout << "\n";
    }

    // Aufgabe 7.2
    double o1(0),
           o2(0),
           r(0);
    char   op            = '+',
           oper[]        = {'+', '-', '/', '*', '%'};
    bool   validOperator = false;

    std::cout << "1. Operand = ";
    std::cin >> o1;
    std::cout << "2. Operand = ";
    std::cin >> o2;

    while (!validOperator) {
        std::cout << "Operator = ";
        std::cin >> op;

        for (char o : oper) {
            if (op == o) {
                validOperator = true;
                continue;
            }
        }
        if (!validOperator) {
            std::cout << "OP falsch!\n";
        }
    }

    switch (op) {
        case '+':
            r = o1 + o2;
            break;
        case '-':
            r = o1 - o2;
            break;
        case '*':
            r = o1 * o2;
            break;
        case '/':
            r = o1 / o2;
            break;
        case '%':
            r = std::fmod(o1, o2);
            break;
        default:
            break;
    }

    std::cout << "Resultat = " << r << "\n";

    return 0;
}