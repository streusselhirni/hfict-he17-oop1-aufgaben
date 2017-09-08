#include <iostream>

using namespace std;

int a31() {
    int x;
    x = 1;
    x = x + 1;
    x += 1;
    ++x;
    x++;
    return x;
}

int a32() {
    int a;
    a = 12;
    a += ++a + a++; // a = 12 + 12 + 13 + 13 + 40
    a = a + a; // a = 40 + 40
    return a;
}

void a33() {
    int a = sizeof(int);
    int b = sizeof(double);
    int c = sizeof(long double);
    long int z = 8579382738584;
    int d = sizeof(z);
    float y = 2.34;
    int e = sizeof(y);
    char x = 'e';
    int f = sizeof(x);
    cout << "int: " << a << "\n" << "double: " << b << "\n" << "long double: " << c << endl;
    cout << "long int: " << d << "\n" << "float: " << e << "\n" << "char: " << f << endl;
    cout << "bool: " << sizeof(bool) << endl;
}

int main() {
    cout << "Aufgabe 3.1" << endl;
    cout << a31() << endl << endl;
    cout << "Aufgabe 3.2" << endl;
    cout << a32() << endl << endl;
    a33();
    return 0;
}