#include <iostream>
#include <random>
#include <vector>

int getRand();

void bubbleSort(std::vector<int> &arr, int size);

void selectSort(std::vector<int> &arr, int size, int startPos = 0);

int main() {
    std::vector<int> bubble(8, 0);
    std::vector<int> select(8, 0);

    for (auto &i : bubble) {
        i = getRand();
    }
    for (auto &i : select) {
        i = getRand();
    }

    std::cout << "Array-Inhalt vor Bubble:";
    for (auto const &i : bubble) {
        std::cout << "\t" << i;
    }
    bubbleSort(bubble, 8);
    std::cout << "\nArray-Inhalt nach Bubble:";
    for (auto const &i : bubble) {
        std::cout << "\t" << i;
    }

    std::cout << "\n\nArray-Inhalt vor Select:";
    for (auto const &i : select) {
        std::cout << "\t" << i;
    }
    selectSort(select, 8);
    std::cout << "\nArray-Inhalt nach Select:";
    for (auto const &i : select) {
        std::cout << "\t" << i;
    }

    return 0;
}

int getRand() {
    std::random_device              rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937                    gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(1, 100);
    return dis(gen);
}

void bubbleSort(std::vector<int> &arr, int size) {

    if (size == 1) return;

    for (unsigned int i(0); i < (size - 1); i++) {
        if (arr.at(i) > arr.at(i + 1)) {
            std::swap(arr.at(i), arr.at(i + 1));
        }
    }

    bubbleSort(arr, --size);
}

void selectSort(std::vector<int> &arr, int size, int startPos) {
    if (startPos == (size + 1)) return;
    int iMin(startPos);

    for (int i(iMin + 1); i < size; i++) {
        if (arr[iMin] > arr[i]) {
            iMin = i;
        }
    }

    std::swap(arr[startPos], arr[iMin]);

    selectSort(arr, size, ++startPos);
}