#include <iostream>
#include <string>

using namespace std;

int main() {

    int i = 0;
    string word;

    // Die do-while-Schleife wird mindestens einmal ausgeführt
    do {

        // Benutzer nach seiner Punktzahl fragen
        cout << "Enter your score" << "\n";
        cin >> i;

        // Überprüfen, ob die Punktzahl zwischen 90 und 100 liegt
        if (i >= 90 && i <= 100) {
            cout << "Excellent" << "\n";
        }

        // Überprüfen, ob die Punktzahl zwischen 75 und 89 liegt
        else if (i >= 75 && i <= 89) {
            cout << "Good" << "\n";
        }

        // Überprüfen, ob die Punktzahl zwischen 60 und 74 liegt
        else if (i >= 60 && i <= 74) {
            cout << "Pass" << "\n";
        }

        // Wenn die Punktzahl 59 oder weniger ist
        else if (i <= 59) {
            cout << "Fail" << "\n";
        }

        // Wenn die Punktzahl außerhalb des gültigen Bereichs liegt
        else {
            cout << "Invalid score" << "\n";
        }

        // Fragen, ob der Benutzer die Prüfung wiederholen möchte
        cout << "Do you want to check again?" << "\n";
        cin >> word;

    // Schleife wiederholen, solange der Benutzer "yes" eingibt
    } while (word == "yes");

    return 0;
}
