#include <iostream>
using namespace std;

int main() {
    // find the hypotenuse of the right-angled triangle 
    int l;
    int b;

    cout << "Enter the length:  ";
    cin>>l;

    cout << "Enter the bredth:  ";
    cin>>b;

    double h = sqrt(pow(l, 2) + pow(b, 2));
    cout << "the hypotenuse of the right-angled triangle is " << h << "cm";
    return 0;
}