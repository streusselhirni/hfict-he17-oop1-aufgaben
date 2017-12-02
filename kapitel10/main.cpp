#include <iostream>

// Aufgabe 10.1
void a101(char var) {
    std::cout << "Es wurde eine Char Variable eingegeben." << std::endl;
}

void a101(int var) {
    std::cout << "Es wurde eine Int Variable eingegeben." << std::endl;
}

void a101(double var) {
    std::cout << "Es wurde eine Double Variable eingegeben." << std::endl;
}

// Aufgabe 10.2

int a102() {
    static int x(0);
    return ++x;
}

int main() {
    int    a(0), count(0);
    double b(1.23);
    char   c('c');

    a101(a);
    a101(b);
    a101(c);

    int z(0);
    std::cout << "Wie oft soll die Funktion aufgerufen werden? ";
    std::cin >> z;

    for (int i(1); i <= z; i++) {
        count = a102();
    }

    std::cout << "Die Funktion wurde " << count << " Mal aufgerufen.";

    return 0;
}