#include <iostream>
using namespace std;

int main() {
    string fullName;
    string address;

    // Ask the user to enter their full name
    cout << "Enter your full name: ";
    getline(cin, fullName);

    // Ask the user to enter their address
    cout << "Enter your address: ";
    getline(cin, address);

    // Display the entered information
    cout << "\n--- User Information ---";
    cout << "Name: " << fullName;
    cout << "Address: " << address;

    return 0;
}