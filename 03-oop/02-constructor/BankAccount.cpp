#include <iostream>
#include <string>
using namespace std;

// Beispiel für eine BankAccount-Klasse:
// - Kapselung mit privaten Attributen
// - Konstruktor zum Initialisieren der Daten
// - Methoden zum Einzahlen und Anzeigen des Kontostands

class BankAccount {
private:
    // Private Attribute können nicht direkt von außen verändert werden
    string owner;
    double balance;

public:
    // Konstruktor: setzt Besitzer und Startguthaben
    BankAccount(string owner, double balance) {
        this->owner = owner;
        this->balance = balance;
    }

    // Erhöht den Kontostand um den angegebenen Betrag
    void deposit(double amount) {
        balance += amount;
    }

    // Zeigt Besitzer und aktuellen Kontostand an
    void showBalance() {
        cout << "Owner: " << owner << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Erstellt ein BankAccount-Objekt mit Startguthaben von 500 €
    BankAccount account("Jeremy", 500);

    // Zahlt 150 € auf das Konto ein
    account.deposit(150);

    // Zeigt die Kontoinformationen an
    account.showBalance();

    return 0;
}