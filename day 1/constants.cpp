// const is a keyword that specifies the value of a variable is constant 

#include <iostream>
using namespace std;

int main(){
    const double PI = 3.14159265359;
    int radius =7;
    double circumference = 2 * PI * radius;

    cout<< "circumference of the circle is "<< circumference<<" cm";

    return 0;
}