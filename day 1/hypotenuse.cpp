#include <iostream>
using namespace std;

int main() {
    // find the hypotenuse of the right-angled triangle 
    int l;
    int b;

    cout << "Enter the length and bredth:  ";
    cin>>l>>b;

    double h = sqrt((l*l) + (b*b));
    cout << "the hypotenuse of the right-angled triangle is " << h << "cm";
    return 0;
}