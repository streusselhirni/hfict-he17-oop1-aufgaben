#include <iostream>
#include <random>

void aufgabe141();

void aufgabe142();

void aufgabe143();

void aufgabe144();

int randint();

int main() {
    int start(1);
    std::cout << "Mit welcher Aufgabe wollen Sie starten? (1, 2, 3, 4) ";
    std::cin >> start;
    switch (start) {
        case 1:
            aufgabe141();
        case 2:
            aufgabe142();
        case 3:
            aufgabe143();
        case 4:
            aufgabe144();
            break;
        default:
            std::cout << "Keine Antwort erhalten." << std::endl;
    }
    return 0;
}

int randint() {
    std::random_device                 rd;
    std::mt19937                       gen(rd());
    std::uniform_int_distribution<int> distribution(0, 100);
    return distribution(gen);
}

void aufgabe141() {
    int      zahl(randint());
    int      antw(0);
    bool play(true);
    while(play) {
        for (int i(1); i <= 6; i++) {
            std::cout << "Geben Sie die " << i << ". Zahl ein: ";
            std::cin >> antw;
            if (antw < zahl) {
                std::cout << "Die gesuchte Zahl ist größer." << std::endl;
            } else if (antw > zahl) {
                std::cout << "Die gesuchte Zahl ist kleiner." << std::endl;
            } else if (antw == zahl) {
                if (i <= 2) {
                    std::cout << "Gratulation! Sie haben die Zahl " << zahl << " unglaublich schnell erraten!"
                              << std::endl;
                    break;
                }
                std::cout << "Gratulation! Sie haben die Zahl " << zahl << " im " << i << ". Versuch erraten"
                          << std::endl;
                break;
            } else {
                std::cerr << "Unbekannter Fehler!" << std::endl;
            }
        }
        std::cout << "Spiel zu ende. Nochmals versuchen? (y/n) ";
        char antwort('n');
        std::cin >> antwort;
        antwort = static_cast<char>(std::toupper(static_cast<int>(antwort)));
        if (antwort == 'N') play = false;
    }
}

void aufgabe142() {

}

void aufgabe143() {

}

void aufgabe144() {

}