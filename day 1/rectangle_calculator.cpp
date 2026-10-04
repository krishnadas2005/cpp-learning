#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    double c;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    //area
    c = a * b;
    cout << "Area of the rectangle is " << c << '\n';

    //perimeter
    c = 2 * (a + b);
    cout << "Perimeter of the rectangle is " << c;
    return 0;
}