#include <iostream>

struct Werte {
    char oper;
    int  zaehler;
    int  nenner;
};

void tauschen(struct Werte &a);

int main() {
    Werte eingabe;
    Werte *pt_eingabe;
    pt_eingabe = &eingabe;

    pt_eingabe->oper   = '*';

    std::cout << "Den Zähler eingeben: ";
    std::cin >> eingabe.zaehler;
    std::cout << "Den Nenner eingeben: ";
    std::cin >> eingabe.nenner;

    pt_eingabe->zaehler += pt_eingabe->nenner;
    pt_eingabe->nenner = pt_eingabe->zaehler - pt_eingabe->nenner;
    pt_eingabe->zaehler -= pt_eingabe->nenner;
    pt_eingabe->oper   = '*';

    std::cout << "Eingegebener Wert: " << eingabe.zaehler << " / " << eingabe.nenner << std::endl;

    std::cout << "Wert nach Berechnung: \n";
    std::cout << pt_eingabe->zaehler << pt_eingabe->oper << pt_eingabe->nenner;

    return 0;
}

// Aufgabe 16.2
void tauschen(struct Werte &a) {
    a.zaehler += a.nenner;
    a.nenner = a.zaehler - a.nenner;
    a.zaehler -= a.nenner;

    a.oper = '*';
}

