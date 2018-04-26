#include <iostream>
#include "MyStatic.h"

int main() {
    std::cout << "Rueckgabewert der getA()-Methode im main(): " << MyStatic::getA() << std::endl;
    std::cout << "1. Objekt erzeugen." << std::endl;

    auto eins = new MyStatic;

    std::cout << "2. Objekt erzeugen." << std::endl;

    MyStatic zwei;

    std::cout << "Rueckgabewert der getA()-Methode im main(): " << MyStatic::getA() << std::endl;
    std::cout << "3. Objekt erzeugen." << std::endl;

    MyStatic drei;

    std::cout << "Rueckgabewert der getA()-Methode im main(): " << eins->getA() << std::endl;

    std::cout << "Zerstöre 1. Object" << std::endl;
    delete eins;
    std::cout << "Rueckgabewert der getA()-Methode im main(): " << eins->getA() << std::endl;
    return 0;
}