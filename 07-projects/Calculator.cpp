#include <iostream>
#include <cmath>  // basic math function

using namespace std;

int main()
 {
    //define variables
	string operation;
	double number1, number2;
    
	//get user input
	cout << "Enter First number: ";
	cin >> number1;
	cout << "Enter Operation (+, -, *, /): ";
	cin >> operation;
	cout << "Enter Second number: ";
	cin >> number2;
	
	//if else statement checking entered operation
	if (operation == "+") {
		cout << number1 + number2;
	} 
	else if (operation == "-") {
		cout << number1 - number2;
	}
	else if (operation == "/") {
		cout << number1 / number2;
	}
    else { 
        cout << "Not a recognized operation!";
	}                            
	return 0;
}