#include <iostream>
using namespace std;

int main() {
    // Declare variables to store numbers and the operation
    double num1, num2, result;
    char operation;

    // Ask the user to input two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Ask the user for the desired operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the chosen operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "The result of addition is: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "The result of subtraction is: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "The result of multiplication is: " << result << endl;
            break;
        case '/':
            if (num2 != 0) { // Check for division by zero
                result = num1 / num2;
                cout << "The result of division is: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation! Please choose +, -, *, or /." << endl;
    }

    return 0;
}
