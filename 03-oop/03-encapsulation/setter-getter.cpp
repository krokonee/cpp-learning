#include <iostream>
using namespace std;

class Employee {
  private:
    // Privates Attribut
    int salary;

  public:
    // Setter-Methode: Setzt das Gehalt
    void setSalary(int s) {
      salary = s;
    }

    // Getter-Methode: Gibt das Gehalt zurück
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;

  // Setter verwenden, um das Gehalt zu setzen
  myObj.setSalary(50000);

  // Getter verwenden, um das Gehalt auszugeben
  cout << myObj.getSalary();

  return 0;
}