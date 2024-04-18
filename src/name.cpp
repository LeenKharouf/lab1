#include "name.hpp"
#include <iostream> // For std::cin and std::cout

using namespace std;

// Function definition
string askName() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    return name;
}
