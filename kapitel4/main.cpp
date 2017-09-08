#include <iostream>
#include <cmath>

using namespace std;

// Aufgabe 4.1
void freierFall() {
    const double g = 9.807;
    double h = 0, T = 0;
    cout << "Gib die Starthöhe ein: ";
    cin >> h;
    T = sqrt((2*h)/g); // Formel aus Aufgabe.
    cout << "Der Fall dauert " << T << " Sekunden." << endl;
}

// Aufgabe 4.2
void ifelseUebung() {
    int x = 0;
    cout << "Gib eine Zahl ein: ";
    cin >> x;
    if (x % 2 == 0) {
        cout << "Die Zahl " << x << " ist gerade." << endl;
    }
    else {
        cout << "Die Zahl " << x << " ist ungerade" << endl;
        if (x < 0) {
            cout << "Die Zahl ist kleiner 0." << endl;
        }
        else {
            cout << "Die Zahl ist größer/gleich 0." << endl;
        }
    }
}

void switchUebung() {
    int x = 0;
    cout << "Gib eine Zahl ein: ";
    cin >> x;
    switch (x % 2) {
        case 0:
            cout << "Die Zahl ist gerade." << endl;
            break;
        case 1:
            cout << "Die Zahl ist ungerade." << endl;
            switch (x<0) {
                case true:
                    cout << "Die Zahl ist kleiner 0." << endl;
                    break;
                case false:
                    cout << "Die Zahl ist größer/gleich 0." << endl;
                    break;
            }
            break;
    }
}

int main() {
//    freierFall();
//    ifelseUebung();
    switchUebung();
    return 0;
}