#include <iostream>
#include <vector>

unsigned long int zaehlen(std::string s);

unsigned int c_zaehlen(const char array[]);

std::vector<char> crypt(std::vector<char> a_word, int s);

int main() {
    // Variablen deklarieren
    std::string       one("");
    std::string       two("");
    std::string       together("");
    std::string       s("");
    std::string       tmp_s;
    int               schluessel(0);
    char              char_string[1000];
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

    // Aufgabe 12.2 - Einfach Zählen mit String-Funktion
    std::cout << "Geben Sie einen weiteren String ein: ";
    std::getline(std::cin, s);
    std::cout << zaehlen(s) << std::endl;


    // Aufgabe 12.2 - Einfach Zählen mit Char-Array
    std::cout << "Geben Sie einen weiteren String (Char-Array) ein: ";
    std::cin.getline(char_string, 1000);
    std::cout << c_zaehlen(char_string) << std::endl;


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

// Funktion für Aufgabe 12.2 - Mit String-Funktion
unsigned long int zaehlen(std::string s) {
    return s.length();
}

// Funktion für Aufgabe 12.2 - Mit Char-Array
unsigned int c_zaehlen(const char array[]) {
    bool         run(true);
    unsigned int i(0), c(0);

    while (run) {
        if (array[i] == '\0') {
            run = false;
        } else {
            c += 1;
        }
        i++;
    }

    return c;
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