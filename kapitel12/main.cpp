#include <iostream>
#include <string>
#include <vector>

unsigned long int zaehlen(std::string s);

std::vector<char> crypt(std::vector<char> w, int s);

int main() {
    // Variablen deklarieren
    std::string       one("");
    std::string       two("");
    std::string       together("");
    std::string       s("");
    std::string       tmp_s;
    int               schluessel(0);
    std::vector<char> a_word;
    std::vector<char> crypted;

    // Strings einlesen
    std::cout << "Geben Sie den 1. Teilstring ein: ";
    std::getline(std::cin, one);
    std::cout << "Geben Sie den 2. Teilstring ein: ";
    std::getline(std::cin, two);
    // Strings zusammensetzen
    together = one + " " + two;
    std::cout << "Der zusammengesetzte String lautet: \n";
    std::cout << together;

    std::cout << "\n";
    std::cout << "\n";

    // Aufgabe 12.2
    std::cout << "Geben Sie einen weiteren String ein: ";
    std::getline(std::cin, s);
    std::cout << zaehlen(s);

    std::cout << "\n";
    std::cout << "\n";

    // Aufgabe 12.3
    std::cout << "Schluessel eingeben: ";
    std::cin >> schluessel;
    std::cin.ignore(); // Needed to flush newline out of buffer for getline to work

    if (schluessel > 26) {
        schluessel %= 26;
    }

    std::cout << "Wort eingeben: ";
    std::getline(std::cin, tmp_s);
    // Read input into vector
    for (auto &c : tmp_s) {
        a_word.push_back(c);
    }
    crypted = crypt(a_word, schluessel);
    for (auto &c : crypted) {
        std::cout << c;
    }

    return 0;
}

// Funktion für Aufgabe 12.2
unsigned long int zaehlen(std::string s) {
    return s.length();
}

// Funktion für Aufgabe 12.3
std::vector<char> crypt(std::vector<char> a_word, int s) {
    std::vector<char> tmp;

    for (auto &c : a_word) {
        // Convert to ASCII
        auto ascii = static_cast<int>(c);
        // Für Grossbuchstaben
        if (ascii >= 65 && ascii <= 90) {
            // Wenn der Wert über Z hinausgeht
            if ((ascii + s) > 90) {
                // Formel durch ausprobieren gefunden
                ascii = ((ascii + s) % 90 + 64);
            } else {
                ascii += s;
            }
        }
            // Für Kleinbuchstaben
        else if (ascii >= 97 && ascii <= 122) {
            if ((ascii + s) > 122) {
                ascii = ((ascii + s) % 122 + 96);
            } else {
                ascii += s;
            }
        }
        tmp.push_back(static_cast<char>(ascii));
    }
    return tmp;
}