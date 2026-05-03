#include <iostream>
#include <string>
using namespace std;
int main() {
    // define variables
    string operation;
    double num1, num2 ;
    //get user input
    cout << "Enter first number: "<< endl;
    cin >> num1 ;
    cout<< "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    // if else statments cheking entered operation
    if (operation == "+") {
        cout<<"Result:" << num1 + num2 << endl;
    }
     else if (operation == "-") {
        cout<< "Result: " << num1 - num2 <<endl;
    }
     else if (operation == "*") {
        cout << "Result: " << num1 * num2 <<endl;
    } 
    else if (operation == "/") {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } 
        else {
            cout << "Error: Division by zero!" << endl;
        }
    } 
    else {
        cout << "Error: Invalid operation!" <<  endl;
    }
    return 0;
}
