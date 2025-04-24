#include <iostream>
#include <string>
using namespace std;

class Car_Showroom {
private:
    string showroomName;
    int numberOfCars;
    float showroomArea;  // in square feet
    string showroomID;

public:
    // Parameterized constructor
    Car_Showroom(string name, int cars, float area, string id) {
        showroomName = name;
        numberOfCars = cars;
        showroomArea = area;
        showroomID = id;
    }

    // Copy constructor
    Car_Showroom(const Car_Showroom &obj) {
        showroomName = obj.showroomName;
        numberOfCars = obj.numberOfCars;
        showroomArea = obj.showroomArea;
        showroomID = obj.showroomID;
    }

    // Function to display showroom information
    void displayInfo() {
        cout << "\nShowroom Information:" << endl;
        cout << "Name: " << showroomName << endl;
        cout << "ID: " << showroomID << endl;
        cout << "Number of Cars Available: " << numberOfCars << endl;
        cout << "Area: " << showroomArea << " sq.ft" << endl;
    }
};

int main() {
    // Create objects using parameterized constructor
    Car_Showroom showroom1("Premium Autos", 25, 5000.5, "PA001");
    Car_Showroom showroom2("Luxury Motors", 15, 3500.75, "LM002");

    // Create object using copy constructor
    Car_Showroom showroom3 = showroom1;

    // Display information of all showrooms
    cout << "Original Showrooms:" << endl;
    showroom1.displayInfo();
    showroom2.displayInfo();

    cout << "\nCopied Showroom:" << endl;
    showroom3.displayInfo();

    // Modify the copied showroom to demonstrate it's a separate object
    cout << "\nAfter modifying copied showroom:" << endl;
    showroom3 = Car_Showroom("Elite Cars", 30, 4500.25, "EC003");
    showroom3.displayInfo();

    return 0;
}
