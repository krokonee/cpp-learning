#include <iostream>
#include <string>

int main() {
    // Erstellt ein String-Array 'cities', das genau 30 Elemente enthält
    std::string cities[30] = {"Paris", "London", "Berlin", "Madrid", "Rome", "Vienna", "Amsterdam", 
    "Prague", "Barcelona", "Dublin", "Athens", "Stockholm", "Warsaw", "Budapest", "Lisbon", "Oslo",
    "Helsinki", "Brussels", "Copenhagen", "Zurich", "Munich", "Milan", "Moscow", "Istanbul", "Kiev",
    "Bucharest", "Sofia", "Belgrade", "Cologne", "Hamburg"};
    
    // Eine for-Schleife gibt die Städte nacheinander aus.
    // Die Variable 'i' (Index) läuft von 0 bis 29.
    for (int i = 0; i <= 29; i++) {
        std::cout << cities[i] << std::endl; 
    }
    
    // Die Gesamtgröße des Arrays wird durch die Größe eines Elements geteilt,
    // um die Anzahl der Elemente zu berechnen.
    int laenge = sizeof(cities) / sizeof(std::string);
    std::cout << "Es gibt " << laenge << " Staedte" << std::endl;
    
    return 0;
}