#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;

public:
    // Constructor with default parameter
    Student(string name = "Unknown") {
        this->name = name;
    }

    // Method to print student's name
    void printName() {
        cout << "Student's name: " << name << endl;
    }
};

int main() {
    // Creating objects of the Student class
    Student student1("Alice");
    Student student2; // Default constructor will set name to "Unknown"

    // Printing the names of the students
    student1.printName();  // Output: Student's name: Alice
    student2.printName();  // Output: Student's name: Unknown

    return 0;
}
