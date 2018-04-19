#include <iostream>
#include <random>
#include "Stack.h"

int getRand();

int main() {
    Stack s;
    int   tmp(0);

    std::cout << "5 Zufallszahlen werden auf den Stack gelegt:\n";

    for (int i(1); s.push(getRand()); i++) {
        s.top(tmp);
        std::cout << "Die " << i << ". Zufallszahl mit dem Wert " << tmp << " wurde auf den Stack gelegt." << std::endl;
    }

    std::cout << "\n\nDas oberste Element hat den Wert " << tmp << std::endl;

    std::cout << "\n\nDie 5 Elemente werden vom Stack geholt:\n";

    for (int i(5); s.pop(tmp); i--) {
        std::cout << "Das " << i << ". Element hat den Wert << " << tmp << std::endl;
    }

    return 0;
}

int getRand() {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 100);
    return dist(rng);
}