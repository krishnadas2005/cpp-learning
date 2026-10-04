#include <iostream>
using namespace std;

int main() {
    double x;
    double y;
    double z;

    cout << "Enter two numbers: ";
    cin  >> x >> y;

    //addition
    z = x + y;
    cout << "the sum is "<< z<<'\n';
                               

    //subsctraction
    z = x-y;
    cout << "the difference is "<< z<<'\n';
    

    //multiplication
    z = x*y;
    cout << "the product  is "<< z<<'\n';
    

    //division
    z = x/y;
    cout << "the quotient is "<< z<<'\n';
    

    return 0;
}