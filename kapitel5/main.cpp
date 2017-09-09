#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, char** argv) {
    double  b = 0;
    int     e = 0;
    cout << "Basis = ";
    cin >> b;
    cout << "Exponent = ";
    cin >> e;
    cout << b << "^" << e << " = " << (pow(b, e)) << endl;
}