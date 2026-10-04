//type covertion in C++ 
#include <iostream>
using namespace std;

int main() {
    int a = 47;
    int b = 80;

    double score = a / (double)b * 100;

    cout<<"your percentage is "<< score<<" %\n"; // Explicit conversion

    //implicit conversion
    char letter = 'A';
    int number = letter;
    
    cout << number;
    return 0;
}