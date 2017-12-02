#include <iostream>
#include <array>
#include <random>

int main(int argc, char *argv[]) {
    std::array<int, 5> fach = {};
    int numberOfRights(0);
    int r(0);

    for (int i = 0; i < 100; i++) {
        for (int i = 0; i < 5; i++) {
            // Get a random device
            std::random_device rd;
            // Generate seed
            std::mt19937 gen(rd());
            // Prepare random generator called dis
            std::uniform_int_distribution<> dis(0, 1);
            // Run generator with seed
            r = dis(gen);

            if (r == 1) {
                numberOfRights += 1;
            }
        }
        fach[numberOfRights-1] += 1;
        numberOfRights = 0;
    }

    for (int i = 0; i < fach.size(); i++) {
        std::cout << "Anzahl Kugeln in Fach " << i << ": " << fach.at(i) << std::endl;
    }

    return 0;
}