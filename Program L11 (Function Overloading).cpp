#include <iostream>

using namespace std;

// Function to add two integers
int add(int a, int b) {
return a + b;
}
// Overloaded function to add two double values
double add(double a, double b) {
return a + b;
}
int main() {
// Using the add function with integer arguments
int intResult = add(30, 20);
cout << "Sum of integers 30 and 20: " << intResult << endl;
// Using the add function with double arguments
double doubleResult = add(5.2, 4.8);
cout << "Sum of doubles 5.2 and 4.8: " << doubleResult << endl;
return 0;

  
}