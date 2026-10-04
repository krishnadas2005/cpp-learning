#include <iostream>
using namespace std;

int main()  {
    int x;
    int y;

    // input of the temperature in celsius
    cout << "Enter the temperature in celsius: " ;
    cin >> x;
    
    y = x * 9 / 5 + 32;
    cout << "the temperature in Fahrenheit is " << y;
    return 0; 
}