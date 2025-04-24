#include <iostream>
#include <string>
using namespace std;

class IIUC_Auditorium {
private:
    float area;              // in square feet
    float totalFloorSpace;   // in square feet
    string hallID;          // hall identification number
    int maxSeatingCapacity;  // maximum number of participants

public:
    // Parameterized constructor
    IIUC_Auditorium(float a, float tfs, string id, int msc) {
        area = a;
        totalFloorSpace = tfs;
        hallID = id;
        maxSeatingCapacity = msc;
    }

    // Copy constructor
    IIUC_Auditorium(const IIUC_Auditorium &aud) {
        area = aud.area;
        totalFloorSpace = aud.totalFloorSpace;
        hallID = aud.hallID;
        maxSeatingCapacity = aud.maxSeatingCapacity;
    }

    // Function to display auditorium details
    void displayDetails() {
        cout << "\nAuditorium Details:" << endl;
        cout << "Hall ID: " << hallID << endl;
        cout << "Area: " << area << " sq.ft" << endl;
        cout << "Total Floor Space: " << totalFloorSpace << " sq.ft" << endl;
        cout << "Maximum Seating Capacity: " << maxSeatingCapacity << " persons" << endl;
    }
};

int main() {
    // Create objects using parameterized constructor
    IIUC_Auditorium auditorium1(5000.5, 7500.25, "AUD-101", 350);
    IIUC_Auditorium auditorium2(6500.75, 9000.5, "AUD-102", 500);

    // Create object using copy constructor
    IIUC_Auditorium auditorium3 = auditorium1;

    cout << "Original Auditoriums:" << endl;
    auditorium1.displayDetails();
    auditorium2.displayDetails();

    cout << "\nCopied Auditorium:" << endl;
    auditorium3.displayDetails();

    // Demonstrate independence of copied object
    cout << "\nAfter modifying copied auditorium:" << endl;
    auditorium3 = IIUC_Auditorium(4500.0, 7000.0, "AUD-103", 300);
    auditorium3.displayDetails();

    return 0;
}
