#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Enter First Num: ";
    cin >> num1;
    cout << "Enter Second Num: ";
    cin >> num2;
    cout << "Enter Operation: (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Answer: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Answer: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Answer: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Answer: " << result << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }

    return 0;
}
