// switch: Used to execute different blocks of code based on the value of an expression.
// break: Stops the switch (or loop) immediately and exits the current block.
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter your number (1 - 7): ";
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "the day is monday";
        break;
    case 2:
        cout << "the day is tuesday";
        break;
    case 3:
        cout << "the day is wednesday";
        break;
    case 4:
        cout << "the day is thursday";
        break;
    case 5:
        cout << "the day is friday";
        break;
    case 6:
        cout << "the day is saturday";
        break;
    case 7:
        cout << "the day is sunday";
        break;
    
    default:
    cout << "Enter a valid input from (1-7): ";
    }

    return 0;
}