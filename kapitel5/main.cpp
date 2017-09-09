#include <iostream>

using namespace std;

// Aufgabe 5.2
double potenzierenMitFor(double b, int e) {
    double x = b;
    for (int i = 1; i < e; ++i) {
        x *= b;
    }
    return x;
}

// Zusatz mit While
double potenzierenMitWhile(double b, int e) {
    double x = b;
    int i = 1;
    while (i < e) {
        x *= b;
        ++i;
    }
    return x;
}

double potenzierenMitDoWhile(double b, int e) {
    double x = b;
    int i = 1;
    do {
        x *= b;
        ++i;
    } while (i < e);
    return x;
}

int main (int argc, char** argv) {
    double  b = 0;
    int     e = 0;
    cout << "Basis = ";
    cin >> b;
    cout << "Exponent = ";
    cin >> e;
    cout << "Mit For Schleife:" << endl;
    cout << b << "^" << e << " = " << potenzierenMitFor(b, e) << endl;
    cout << "Mit While Schleife:" << endl;
    cout << b << "^" << e << " = " << potenzierenMitWhile(b, e) << endl;
    cout << "Mit DoWhile Schleife:" << endl;
    cout << b << "^" << e << " = " << potenzierenMitDoWhile(b, e) << endl;
}