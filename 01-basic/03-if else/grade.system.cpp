#include <iostream>
#include <string>
using namespace std;

int main() {
    int i = 0;
    string word;
do {
    cout << "Enter your score" << "\n";
    cin >> i;
    
if(i >= 90 && i <= 100) {
    cout << "Excellent" << "\n";
}
else if(i >= 75 && i <= 89) {
    cout << "Good" << "\n";
}
else if(i >= 60 && i <= 74) {
    cout << "Pass" << "\n";
}
else if(i <= 59) {
    cout << "Fail" << "\n";
}
else {
    cout << "Invalid score" << "\n";
}
cout << "Do you want to check again?" << "\n";
cin >> word;
}
while (word == "yes");
return 0;
}