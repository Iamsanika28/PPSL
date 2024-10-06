#include <iostream>

#include <string>

using namespace std;
class Student {
public:
// Properties (data members)
string name;
int rollNumber;
int age;
// Function to display student information
void displayInfo() {
cout << "Name: " << name << endl;
cout << "Roll Number: " << rollNumber << endl;
cout << "Age: " << age << endl;
}
};
int main() {
// Create objects (instances) of the Student class
Student s1;
Student s2;
// Set properties for student1
s1.name = "Sam";
s1.rollNumber = 51;
s1.age = 20;
// Set properties for student2
s2.name = "Ram";
s2.rollNumber = 42;
s2.age = 29;
// Display information for each student

cout << "S1 Information:" << endl;

s1.displayInfo();
cout << endl; // For better readability
cout << "S2 Information:" << endl;
s2.displayInfo();
return 0;
}