#include <iostream>
using new space std;
// Using default arguments
int multiply(int a, int b = 1) {
    return a * b;
}

// Equivalent using function overloading
int multiply_overloaded(int a) {
    return a * 1;
}

int multiply_overloaded(int a, int b) {
    return a * b;
}

int main() {
    // Using default argument version
    std::cout << "Default args: " << multiply(5) << ", " << multiply(5, 3) << std::endl;

    // Using overloaded version
    std::cout << "Overloaded: " << multiply_overloaded(5) << ", " << multiply_overloaded(5, 3) << std::endl;

    return 0;
}
