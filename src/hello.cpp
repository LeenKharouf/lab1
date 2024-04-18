#include "../include/name.hpp"
#include <iostream> 

int main() {
    std::string user_name = askName(); // Call the function to get the user's name
    std::cout << "Hello, " << user_name << "!" << std::endl;
    return 0;
}
