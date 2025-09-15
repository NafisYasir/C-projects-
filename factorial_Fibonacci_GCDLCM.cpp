#include <iostream>
using namespace std;

void factorial_Fibonacci_GCDLCM() {
    int choice;
    cout << "Choose one of the following options: " << endl;
    cout << "1. Factorial " << endl;
    cout << "2. Fibonacci series " << endl;
    cout << "3. GCD (Greatest Common Divisor) " << endl;
    cout << "4. LCM (Least Common Multiple) " << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int n;
            unsigned long long factorial = 1;
            cout << "Enter a non-negative number: " << endl;
            cin >> n;
            if (n < 0)
                cout << "Error! Factorial of a negative number doesn't exist. " << endl;
            else {
                for (int i = 1; i <= n; ++i) {
                    factorial *= i;
                }
                cout << "Factorial of " << n << " = " << factorial << endl;
            }
            break;
        }
        case 2: {
            int n, t1 = 0, t2 = 1, nextTerm = 0;
            cout << "Enter the number of terms: ";
            cin >> n;
            cout << "Fibonacci Series: " << endl;

            if (n >= 1) {
                cout << t1 << ", ";
            }
            if (n >= 2) {
                cout << t2 << ", ";
            }

            for (int i = 3; i <= n; ++i) {
                nextTerm = t1 + t2;
                t1 = t2;
                
                t2 = nextTerm;
                cout << nextTerm << ", ";
            }
            cout << endl;
            break;
        }
        case 3: {
            int a, b;
            cout << "Enter two positive integers: ";
            cin >> a >> b;
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            cout << "GCD is: " << a << endl;
            break;
        }
        case 4: {
            int a, b, original_a, original_b;
            cout << "Enter two positive integers: ";
            cin >> a >> b;
            original_a = a;
            original_b = b;

            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            int gcd = a;
            int lcm = (original_a * original_b) / gcd;
            cout << "LCM is: " << lcm << endl;
            break;
        }
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

int main() {
    factorial_Fibonacci_GCDLCM();
    return 0;
}