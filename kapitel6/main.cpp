#include <iostream>

int main(int argc, char *argv[]) {
    // Aufgabe 6.1
    const long double f  = 6.673e-11;
    double            m1 = 0;
    double            m2 = 0;
    double            r  = 0;
    double            F  = 0;

    std::cout << "m1 eingeben: ";
    std::cin >> m1;
    std::cout << "m2 eingeben: ";
    std::cin >> m2;
    std::cout << "r eingeben: ";
    std::cin >> r;

    F = static_cast<double>(f * (m1 * m2) / (r * r));

    std::cout << "F = " << F << std::endl << std::endl;


    // Aufgabe 6.2
    double s = 0;
    double e = 0;
    double w = 0;

    std::cout << "Startwert = ";
    std::cin >> s;
    std::cout << "Endwert = ";
    std::cin >> e;
    std::cout << "Schrittweite = ";
    std::cin >> w;

    while (s <= e) {
        std::cout << s << "\t";
        s += w;
    }

    std::cout << std::endl << std::endl;


    // Auggabe 6.2 Zusatz
    std::cout << "Startwert = ";
    std::cin >> s;
    std::cout << "Endwert = ";
    std::cin >> e;
    std::cout << "Schrittweite = ";
    std::cin >> w;

    for (double i = s; i <= e; i += w) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
}