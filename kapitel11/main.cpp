#include <iostream>

// Aufgabe 11.1
void aufgabe111() {
    double a[4];

    for(int i = 0; i < 4; i++) {
        std::cout << "a[" << i << "] = ";
        std::cin >> a[i];
    }

    std::cout << "Ausgabe:" << std::endl;
    for (int i = 3; i >= 0; i--) {
        std::cout << a[i] << "\t";
    }

    std::cout << std::endl;
}

// Aufgabe 11.2
void swap(double (&x)[2]) {
    std::reverse(std::begin(x), std::end(x));
}

int main(int argc, char *argv[]) {
    aufgabe111();

    // Aufgabe 11.2

    double a[2];

    for (int i = 0; i < 2; i++) {
        std::cout << "a[" << i << "] = ";
        std::cin >> a[i];
    }

    std::cout << "Die Werte nach aufruf der Funktion: \n";

    swap(a);

    for (int i = 0; i < 2; i++) {
        std::cout << "a[" << i << "] = " << a[i] << std::endl;
    }

    return 0;
}