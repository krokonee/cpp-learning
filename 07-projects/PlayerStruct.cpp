#include <iostream>
#include <string>

using namespace std;

// Aufzählung für die verschiedenen Charakterklassen
enum Class {
    WARRIOR,
    MAGE,
    ARCHER
};

// Struktur für einen Spieler
// Speichert alle wichtigen Informationen über den Charakter
struct Player {
    string name;
    int health;
    int lvl;
    Class playerClass;
};

int main() {

    // Erstellt einen neuen Spieler
    Player urPlayer1;

    // Initialisiert die Eigenschaften des Spielers
    urPlayer1.name = "Warrior";
    urPlayer1.health = 100;
    urPlayer1.lvl = 1;
    urPlayer1.playerClass = WARRIOR;

    // Menü läuft so lange, bis der Benutzer "5" auswählt
    int i = 0;

    do {
        // Hauptmenü anzeigen
        cout << "1 - Show character\n"
             << "2 - Change health\n"
             << "3 - Level up\n"
             << "4 - Show class\n"
             << "5 - Exit\n";

        cin >> i;

        // Führt abhängig von der Benutzereingabe eine Aktion aus
        switch(i) {

            // Zeigt die Charakterinformationen an
            case 1:
                cout << "Name: " << urPlayer1.name << "\n";
                cout << "Health: " << urPlayer1.health << "\n";
                cout << "Level: " << urPlayer1.lvl << "\n";
                break;

            // Ändert die Gesundheit des Spielers
            case 2:
                cout << "Enter new health: ";
                cin >> urPlayer1.health;
                break;

            // Erhöht das Level um 1
            case 3:
                urPlayer1.lvl++;
                cout << "Level up!\n";
                break;

            // Zeigt die Klasse des Spielers an
            case 4:
                switch (urPlayer1.playerClass) {

                    case WARRIOR:
                        cout << "Warrior\n";
                        break;

                    case MAGE:
                        cout << "Mage\n";
                        break;

                    case ARCHER:
                        cout << "Archer\n";
                        break;

                    // Wird ausgeführt, wenn keine gültige Klasse vorhanden ist
                    default:
                        cout << "Wrong class, dude!\n";
                }
                break;

            // Beendet das Programm
            case 5:
                cout << "Goodbye!\n";
                break;

            // Ungültige Menüauswahl
            default:
                cout << "Invalid choice!\n";
        }

    } while(i != 5);

    return 0;
}