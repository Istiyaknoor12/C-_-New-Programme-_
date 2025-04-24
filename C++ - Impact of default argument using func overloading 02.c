////Example 2: String Processing Function


#include <iostream>
#include <string>

// Using default arguments
void printMessage(const std::string& message, bool uppercase = false) {
    if (uppercase) {
        for (char c : message) {
            std::cout << static_cast<char>(toupper(c));
        }
    } else {
        std::cout << message;
    }
    std::cout << std::endl;
}

// Equivalent using function overloading
void printMessage_overloaded(const std::string& message) {
    std::cout << message << std::endl;
}

void printMessage_overloaded(const std::string& message, bool uppercase) {
    if (uppercase) {
        for (char c : message) {
            std::cout << static_cast<char>(toupper(c));
        }
        std::cout << std::endl;
    } else {
        printMessage_overloaded(message);
    }
}

int main() {
    // Using default argument version
    printMessage("Hello World");
    printMessage("Hello World", true);

    // Using overloaded version
    printMessage_overloaded("Hello World");
    printMessage_overloaded("Hello World", true);

    return 0;
}
