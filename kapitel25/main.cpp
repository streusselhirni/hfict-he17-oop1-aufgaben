#include <iostream>
#include <random>
#include <array>

int getRand();

void sort(std::array<int, 8> &arr, int size);

void sortRec(std::array<int, 8> &arr, int size);

int main() {
    std::array<int, 8> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    for (auto &i : arr) {
        i = getRand();
    }

    for (auto const &i : arr) {
        std::cout << i << std::endl;
    }

    std::cout << "\n\n";

    sort(arr, 8);
    //sortRec(arr, 8);

    for (auto const &i : arr) {
        std::cout << i << std::endl;
    }

    return 0;
}

int getRand() {
    std::random_device              rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937                    gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(1, 100);
    return dis(gen);
}

void sort(std::array<int, 8> &arr, int size) {

    for (int j(size); j > 0; j--) {
        for (int i(0); i < (j - 1); i++) {
            if (arr.at(i) > arr.at(i + 1)) {
                std::swap(arr.at(i), arr.at(i + 1));
            }
        }
    }
}

void sortRec(std::array<int, 8> &arr, int size) {

    if (size == 1) return;

    for (unsigned int i(0); i < (size - 1); i++) {
        if (arr.at(i) > arr.at(i + 1)) {
            std::swap(arr.at(i), arr.at(i + 1));
        }
    }

    sortRec(arr, --size);
}