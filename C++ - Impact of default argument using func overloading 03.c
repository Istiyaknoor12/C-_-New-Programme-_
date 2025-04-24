////Example 3: Configuration Settings


#include <iostream>
#include <string>

// Using default arguments
void configureSystem(int timeout = 30, const std::string& logfile = "default.log") {
    std::cout << "Configuring system with timeout: " << timeout
              << " and logfile: " << logfile << std::endl;
}

// Equivalent using function overloading
void configureSystem_overloaded() {
    configureSystem_overloaded(30, "default.log");
}

void configureSystem_overloaded(int timeout) {
    configureSystem_overloaded(timeout, "default.log");
}

void configureSystem_overloaded(int timeout, const std::string& logfile) {
    std::cout << "Configuring system with timeout: " << timeout
              << " and logfile: " << logfile << std::endl;
}

int main() {
    // Using default argument version
    configureSystem();
    configureSystem(60);
    configureSystem(60, "custom.log");

    // Using overloaded version
    configureSystem_overloaded();
    configureSystem_overloaded(60);
    configureSystem_overloaded(60, "custom.log");

    return 0;
}
