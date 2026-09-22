#include <iostream>
#include <string>

int main() {

    // Speichert den Namen als Text
    std::string name = "Jeremy";
    // Speichert das Alter als ganze Zahl
    int age = 30;
    // Speichert die Körpergröße als Kommazahl
    double height = 1.78;
    // Speichert, ob die Person Student ist
    // true = ja, false = nein
    bool isStudent = true;

    // Gibt den Namen aus
    std::cout << "Name: " << name << std::endl;
    // Gibt das Alter aus
    std::cout << "Age: " << age << std::endl;
    // Gibt die Körpergröße aus
    std::cout << "Height: " << height << std::endl;
    // Gibt aus, ob die Person Student ist
    std::cout << "Is Student: " << isStudent << std::endl;

    return 0;
}