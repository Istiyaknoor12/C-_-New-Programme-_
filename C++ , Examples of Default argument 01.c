////Example 1: Basic Mathematical Function


#include <iostream>
using namespace std;

// Function with default arguments
double calculateArea(double length, double width = 1.0) {
    return length * width;
}

int main() {
    // Using both parameters
    cout << "Rectangle area (5x3): " << calculateArea(5, 3) << endl;

    // Using default width
    cout << "Square area (5x1): " << calculateArea(5) << endl;

    return 0;
}
