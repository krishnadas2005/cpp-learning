// if statement - checks wheather the statement is right or not  
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote.";
    }
    else if (age >= 13) {
        cout << "You are a teenager, but you are not eligible to vote yet.";
    }
    else if (age >= 10) {
        cout << "You are not eligible to vote.";
    }
    else {
        cout << "You are too young to vote.";
    }

    return 0;
}                        