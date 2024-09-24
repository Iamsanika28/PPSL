#include <iostream>

using namespace std;

int main()
{
int a = 8, b = 13;
cout << "Before swapping." << endl;
cout << "a = " << a << ", b = " << b << endl;
a = a + b;
b = a - b;
a = a - b;
cout << "\nAfter swapping." << endl;
cout << "a = " << a << ", b = " << b << endl;
return 0;
}