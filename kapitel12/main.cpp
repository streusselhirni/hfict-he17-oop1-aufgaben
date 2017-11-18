#include <iostream>

unsigned long int zaehlen(std::string s);

int main() {
    // Variablen deklarieren
    std::string one;
    std::string two;
    std::string together;
    std::string s;

    // Strings einlesen
    std::cout << "Geben Sie den 1. Teilstring ein: ";
    std::getline(std::cin, one);
    std::cout << "Geben Sie den 2. Teilstring ein: ";
    std::getline(std::cin, two);
    // Strings zusammensetzen
    together = one + " " + two;
    std::cout << "Der zusammengesetzte String lautet: \n";
    std::cout << together;

    std::cout << "\n";
    std::cout << "\n";

    // Aufgabe 2
    std::cout << "Geben Sie einen weiteren String ein: ";
    std::getline(std::cin, s);
    std::cout << zaehlen(s);
    return 0;
}

// Funktion für Aufgabe 2
unsigned long int zaehlen(std::string s) {
    return s.length();
}