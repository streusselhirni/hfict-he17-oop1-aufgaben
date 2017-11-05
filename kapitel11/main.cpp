#include <iostream>
#include <vector>

// Prototypes of functions
void aufgabe111();
void swap_vector(std::vector <double> &x);

int main(int argc, char *argv[]) {
    aufgabe111();

    std::vector<double> v(2);

    for (int i = 0; i < 2; i++) {
        std::cout << "a[" << i << "] = ";   // Frage nach Wert i
        std::cin >> v[i];                   // Speichere Wert in Vector
    }

    std::cout << "Die Werte nach aufruf der Funktion: \n";
    // Funktion für Vector
    swap_vector(v);

    std::cout << "Ausgabe des Vectors: " << std::endl;

    for (int i = 0; i < 2; i++) {
        std::cout << "a[" << i << "] = " << v[i] << std::endl;
    }


    return 0;
}

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
void swap_vector(std::vector <double> &x) {
    std::reverse(x.begin(), x.end());
}