#include <iostream>

// Das Programm analysiert die Geschwindigkeiten von Autos.

// Die Program verarbeitet ein Array mit 50 Geschwindigkeitswerten.
// Sie berechnet die durchschnittliche Geschwindigkeit.
// Sie findet die höchste Geschwindigkeit.
// Sie zählt, wie viele Fahrer die Geschwindigkeit von 50 km/h überschritten haben.
// Der Grenzwert beträgt 50 km/h.

int main() {
    // Liste mit 50 gemessenen Geschwindigkeiten
    int messwerte[50] = {87, 69, 87, 74, 48, 78, 63, 49, 71, 48, 46, 81, 68, 43, 53, 90, 92, 65, 49, 73, 57, 71, 60,
        94, 79, 41, 60, 82, 84, 82, 79, 99, 54, 47, 80, 55, 85, 42, 48, 65, 85, 56, 41, 61, 62, 55,
        52, 100, 87, 42};

    int hoehste = messwerte[0];

    int laenge = sizeof(messwerte) / sizeof(int);
    double summe = 0;

    int suender = 0;

    // Wir gehen nacheinander durch alle 50 Geschwindigkeitswerte
    for (int i = 0; i <= 49; i++) {
        summe = summe + messwerte[i]; // Die aktuelle Geschwindigkeit wird zur Summe addiert

        // Wenn die aktuelle Geschwindigkeit höher als die bisher höchste ist
        if (messwerte[i] > hoehste) {
            hoehste = messwerte[i]; // Die aktuelle Geschwindigkeit wird zur höchsten Geschwindigkeit
        }

        // Wenn die Geschwindigkeit höher als 50 km/h ist
        if (messwerte[i] > 50) {
            suender = suender + 1; // Ein weiterer Verkehrssünder wird gezählt
        }
    }

    // Die durchschnittliche Geschwindigkeit wird berechnet
    double durchschnitt = summe / laenge;

    std::cout << "Durchschnittsgeschwindigkeit ist: " << durchschnitt << std::endl;
    std::cout << "Hoehste Geschwindigkeit ist: " << hoehste << std::endl;
    std::cout << "Anzahl der Verkehrsuender: " << suender;

    return 0;
}