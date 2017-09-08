#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Aufgabe 2.1
    double a, b, c, d, e, f;
    a = 5.3;
    b = 4.2;
    cout << "Zahl 1: " << a << "\nZahl 2: " << b << endl << endl;
    c = a + b;
    cout << "Ergebnis Addition: " << c << endl;
    d = a - b;
    cout << "Ergebnis Substraktion: " << d << endl;
    e = a * b;
    cout << "Ergebnis Multiplikation: " << e << endl;
    f = a / b;
    cout << "Ergebnis Division: " << f << endl;

    // Aufgabe 2.2
    cout << "\n\n";
    double eingabe;
    cout << "Gib eine Zahl ein: ";
    cin >> eingabe;
    double ausgabe = eingabe;
    cout << "Ihre Eingabe: " << ausgabe << endl;

    // Aufgabe 2.3
    const double pi = 3.1516926;
    cout << "\n\n";
    double r1, h1, V1, r2, h2, V2, schnitt;
    cout << "Gibt den Radius ein: ";
    cin >> r1;
    cout << "Gib die Höhe ein: ";
    cin >> h1;
    V1 = pow(r1, 2) * pi * h1;
    cout << "Das Volumen ist: " << V1 << endl;
    cout << "Gibt den zweiten Radius ein: ";
    cin >> r2;
    cout << "Gib die zweite Höhe ein: ";
    cin >> h2;
    V2 = pow(r2, 2) * pi * h1;
    cout << "Das zweite Volumen ist: " << V2 << endl;
    schnitt = (V1 + V2) / 2;
    cout << "Das Durchschnittsvolumen ist: " << schnitt << endl;

    return 0;
}