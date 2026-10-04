//arthmetic operators - it operates all the arthmetic oprations(+, -, *, /)
#include <iostream>
using namespace std;

int main() {
    //assignment opertor simple example 
    int a = 10;
    int b = 3;

cout << a + b << '\n';
cout << a - b << '\n';
cout << a * b << '\n';
cout << a / b << '\n';
cout << a % b << '\n';

    int cars = 20;
    cars +=1;
    cars -=2;
    cars *=3;
    cars /=4;
// modulus operators
cars %=2;
cout<<"the number of cars left is "<<cars;
return 0;
}
