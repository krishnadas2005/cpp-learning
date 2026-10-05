// usable calculator
#include <iostream>
using namespace std;

int main() {

    char operand;
    double number_1;
    double number_2;
    double result;

    cout << "_____________ Calculator ______________" << '\n';

    cout << "Enter the operation to perform (+, -, *, /): ";
    cin >> operand;

    cout << "Enter the first number: ";
    cin >> number_1;

    cout << "Enter the second number: ";
    cin >> number_2;

    switch (operand) {
        case '+':
            result = number_1 + number_2;
            cout << "The sum is " << result;
            break;

        case '-':
            result = number_1 - number_2;
            cout << "The difference is " << result;
            break;

        case '*':
            result = number_1 * number_2;
            cout << "The product is " << result;
            break;

        case '/':
            if (number_2 != 0) {
                result = number_1 / number_2;
                cout << "The quotient is " << result;
            }
            else {
                cout << "Error: Cannot divide by zero.";
            }
            break;

        default:
            cout << "Invalid operator.";
    }

    cout << "\n__________________________________________";

    return 0;
}