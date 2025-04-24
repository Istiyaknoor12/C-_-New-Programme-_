////Here's a C++ program that defines a University_Student class with the requested attributes and constructors:


#include <iostream>
#include <string>
using namespace std;

class University_Student {
private:
    string studentName;
    string studentID;
    string departmentName;
    float cgpa;

public:
    // Parameterized constructor
    University_Student(string name, string id, string dept, float gpa) {
        studentName = name;
        studentID = id;
        departmentName = dept;
        cgpa = gpa;
    }

    // Copy constructor
    University_Student(const University_Student &obj) {
        studentName = obj.studentName;
        studentID = obj.studentID;
        departmentName = obj.departmentName;
        cgpa = obj.cgpa;
    }

    // Function to display student information
    void displayInfo() {
        cout << "\nStudent Information:" << endl;
        cout << "Name: " << studentName << endl;
        cout << "ID: " << studentID << endl;
        cout << "Department: " << departmentName << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    // Create objects using parameterized constructor
    University_Student student1("John Doe", "2023001", "Computer Science", 3.75);
    University_Student student2("Alice Smith", "2023002", "Electrical Engineering", 3.92);

    // Create object using copy constructor
    University_Student student3 = student1;

    // Display information of all students
    cout << "Original Students:" << endl;
    student1.displayInfo();
    student2.displayInfo();

    cout << "\nCopied Student:" << endl;
    student3.displayInfo();

    return 0;
}
