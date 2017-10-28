#include <iostream>


// Aufgabe 9.1
int numTest(int a) {
    if (a > 0) return 1;
    else if (a < 0) return -1;
    else return 0;
}
int readNum() {
    std::cout << "Gib eine Zahl ein: ";
    int a(-1);
    std::cin >> a;
    return a;
}
std::string writeText(int a) {
    std::cout << a;
}

// Aufgabe 9.2
int sum (int x) {
    int res(0);
    for (int i = 0; i <= x; i++) {
        res += i;
    }
    return res;
}

int main() {
    // Aufgabe 9.1
    int num = readNum();
    writeText(numTest(num));

    std::cout << std::endl;

    // Aufgabe 9.2
    int num2 = readNum();
    std::cout << sum(num2);
    return 0;
}