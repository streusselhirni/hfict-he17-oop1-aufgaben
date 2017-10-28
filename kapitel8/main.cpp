#include <iostream>

// Funktion für Aufgabe 8.2
int kleinsteZahl(int a, int b, int c) {    // a = 6, b = 5, c = 4
    if (a < b) {
        if (a < c) return c;
    }
    if (b < a) {
        if (b < c) return b;
    }
    if (c < b) {
        if (c < a) return c;
    }
}

int main() {
    // Aufgabe 8.1
    int zahl(1);
    while (zahl <= 10) {
        for (int i = 1; i <= 10; i++) {
            std::cout << i * zahl << "\t";
        }
        std::cout << std::endl;
        ++zahl;
    }
    
    // Aufgabe 8.2
    int a(0), b(0), c(0), result(0);
    std::cout << "Geben Sie drei Zahlen ein." << std::endl;
    std::cout << "Die 1. Zahl: ";
    std::cin >> a;
    std::cout << "Die 2. Zahl: ";
    std::cin >> b;
    std::cout << "Die 3. Zahl: ";
    std::cin >> c;
    result = kleinsteZahl(a, b, c);
    std::cout << "Die kleinste Zahl ist: " << result << std::endl;
    return 0;
}