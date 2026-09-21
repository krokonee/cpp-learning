#include <iostream>
#include <string>
using namespace std;

// Beispiel für grundlegende OOP:
// - Kapselung mit privaten Attributen
// - Konstruktor zum Initialisieren der Objektdaten
// - Erstellen eines Objekts in main()

class Player {
    private:
    string name;
    int health;
    int level;
    
    public:
     Player(string name, int health, int level) {
     this->name = name;
     this->health = health;
     this->level = level;  
    }
    
};

int main() {
    Player player("Juggernaut", 100, 5);
    return 0;
}