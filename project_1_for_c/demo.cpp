#include <iostream>
#include <cmath>   // for pow()
using namespace std;

int main() {
    double num1, num2, result;
    char choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "1. (+) addition\n";
    cout << "2. (-) subtraction\n";
    cout << "3. (*) multiplication\n";
    cout << "4. (/) division\n";
    cout << "5. (%) modulus\n";
    cout << "6. (^) power\n";

    cout << "Enter your choice (+, -, *, /, %, ^): ";
    cin >> choice;

    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case '+':
            result = num1 + num2;
            cout << "Result of addition is: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result of subtraction is: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result of multiplication is: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result of division is: " << result << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                cout << "Result of modulus is: " << result << endl;
            } else {
                cout << "Error! Modulus by zero." << endl;
            }
            break;
        case '^':
            result = pow(num1, num2);
            cout << "Result of power is: " << result << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
    }

    return 0;
}
