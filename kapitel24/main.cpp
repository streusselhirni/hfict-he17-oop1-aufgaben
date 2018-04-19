#include <iostream>
#include <random>
#include "Stack.h"

int getRand();
void aufgabe1();
void aufgabe2();

int main() {
    aufgabe1();
    aufgabe2();
    return 0;
}

int getRand() {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 100);
    return dist(rng);
}

void aufgabe1() {
    // Aufgabe 24.1
    Stack s;
    int   tmp(0);
    std::cout << "1. Teilaufgabe\n\n";
    std::cout << "5 Zufallszahlen werden auf den Stack gelegt:\n";

    for (int i(1); s.push(getRand()); i++) {
        s.top(tmp);
        std::cout << "Die " << i << ". Zufallszahl mit dem Wert " << tmp << " wurde auf den Stack gelegt." << std::endl;
    }

    std::cout << "\n\nDas oberste Element hat den Wert " << tmp << std::endl;

    std::cout << "\n\nDie 5 Elemente werden vom Stack geholt:\n";

    for (int i(5); s.pop(tmp); i--) {
        std::cout << "Das " << i << ". Element hat den Wert " << tmp << std::endl;
    }
    std::cout << "\n---------------------------------------------\n\n";
}

void aufgabe2() {
    // Aufgabe 24.2
    Stack *a = new Stack[3];
    int tmp(0);

    std::cout << "2. Teilaufgabe\n\n";
    std::cout << "5 Zufallszahlen werden auf den Stack gelegt:\n";

    for (int i(1); a[1].push(getRand()); i++) {
        a[1].top(tmp);
        std::cout << "Die " << i << ". Zufallszahl mit dem Wert " << tmp << " wurde auf den Stack gelegt." << std::endl;
    }

    std::cout << "\n\nDas oberste Element hat den Wert " << tmp << std::endl;

    std::cout << "\n\nDie 5 Elemente werden vom Stack geholt:\n";

    for (int i(5); a[1].pop(tmp); i--) {
        std::cout << "Das " << i << ". Element hat den Wert " << tmp << std::endl;
    }
}