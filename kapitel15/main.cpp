#include <iostream>
#include <array>

void aufgabe151();

void aufgabe152();

void aufgabe153();

void aufgabe154();

void aufgabe155();

void swap(double &val1, double &val2);

void ausgabe(std::array<std::array<int, 10>, 10> a, int s1);

void ausgabe2(int ** array);

int main(int argc, char *argv[]) {
    aufgabe151();

    std::cout << "\n";
    std::cout << "\n";

    aufgabe152();

    std::cout << "\n";
    std::cout << "\n";

    aufgabe153();

    std::cout << "\n";
    std::cout << "\n";

    aufgabe154();

    std::cout << "\n";
    std::cout << "\n";

    aufgabe155();

    return 0;
}

void aufgabe151() {
    double one(5);
    double two(1);
    std::cout << one << " und " << two << std::endl;
    swap(one, two);
    std::cout << one << " und " << two << std::endl;
}

void aufgabe152() {
    int a(6), b(2);
    int *pa, *pb;
    pa = &a;
    *pa += 1;   //a wird zu 7
    // Ausgabe a = 7
    std::cout << "a = ? " << a << std::endl;
    pb = &b;
    *pb = *pb * *pa; //b wird zu 2 * 7 = 14
    b = b++ + ++a; // b = 14 + 8; b = 22
    // Ausgabe: b = 22
    std::cout << "b = ? " << b << std::endl;

}

void aufgabe153() {
    float *f1, f2, f3(1), *f4;              // Pointer: f1, f4; f2 undefiniertes float, f3=1
    f2 = 23;                                // f2 = 23
    float &f5 = f2;                         // f5 ist Alias für f2
    f1 = &f5;                               // f1 = Adresse von f5 und f2
    *f1 = 5;                                // f1 = 5 = f5 = f2
    f1 = NULL ;                             // Adresse von f1 wird NULL
    std::cout<<"f1: "<<f1<<std::endl;       // // Adresse von f1 (0x0) ausgeben
    std::cout<<"f2: "<<f2<<std::endl;       // // Ausgabe: "f2: 5"
    f4 = f1 = &f2;                          // f4 = f1 = Adresse von f2
    *f1 = 23;                               // Wert von f1 = 23. f4, f2 = 23
    f4 = &f3;                               // f4 = Adresse von f3
    f3 = 17;                                // f3 = 17 = f4
    std::cout<<"f1: "<<f1<<std::endl;       // // Adresse von f1 wird ausgegeben
    std::cout<<"f2: "<<f2<<std::endl;       // // f2: 23
    std::cout<<"f3: "<<f3<<std::endl;       // // f3: 17
    std::cout<<"++*f4: "<<++*f4<<std::endl ;// // ++*f4: 18
}

void aufgabe154() {
    std::array<std::array<int, 10>, 10> einmaleins = {};

    for (int i(1); i <= 10; i++) {
        for (int j(1); j <= 10; j++) {
            einmaleins.at(i - 1).at(j - 1) = (i * j);
        }
    }

    ausgabe(einmaleins, 10);
}

void aufgabe155() {
    int **ainmalains;
    ainmalains = new int * [10];

    for (int i(0); i < 10; i++) {
        ainmalains[i] = new int [10];
    }

    for (int i(0); i < 10; i++) {
        for (int j(0); j < 10; j++) {
            ainmalains[i][j] = (i+1)*(j+1);
        }
    }

    ausgabe2(ainmalains);
}

// Für Aufgabe 15.1
void swap(double &val1, double &val2) {
    double tmp = val1;
    val1 = val2;
    val2 = val1;
}

// Für Aufgabe 15.4
void ausgabe(std::array<std::array<int, 10>, 10> a, int s1) {
    for (int x(0); x < s1; x++) {
        for (int y(0); y < 10; y++) {
            std::cout << a[x][y] << "\t";
        }
        std::cout << "\n";
    }
}

// Für Aufgabe 15.5
void ausgabe2(int ** array) {
    for (int i(0); i < 10; i++) {
        for (int j(0); j < 10; j++) {
            std::cout << array[i][j] << "\t";
        }
        std::cout << "\n";
    }
}