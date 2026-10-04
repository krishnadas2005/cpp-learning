//input from the user
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    cout<<"Enter your name: "; // insertion operator
    cin>>name; // extraction operator
    cout<<"Enter your age:  ";
    cin>>age;

    cout<<"hey!"<<name<< '\n'<<"your are "<<age<<" years old"<<'\n'<<"welcome to C++ rogramming";
    return 0;
}