////Example 3: Class Constructor with Default Arguments


#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;
    double interestRate;

public:
    // Constructor with default arguments
    BankAccount(string name, double initial = 0.0, double rate = 0.01)
        : owner(name), balance(initial), interestRate(rate) {}

    void display() const {
        cout << owner << "'s account: $" << balance
             << " (rate: " << (interestRate*100) << "%)" << endl;
    }
};

int main() {
    // Using all parameters
    BankAccount acc1("Alice", 1000.0, 0.05);
    acc1.display();

    // Using default interest rate
    BankAccount acc2("Bob", 500.0);
    acc2.display();

    // Using all defaults (except required name)
    BankAccount acc3("Charlie");
    acc3.display();

    return 0;
}
