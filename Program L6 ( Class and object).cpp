#include<iostream>
#include<string>
using namespace std;

class Mobile {

public:

string brand;
string model;
int year;
};
int main() {
// Create an object of Mobile 
Mobile mobileObj1;
mobileObj1.brand = "Vivo";
mobileObj1.model = "v3";
mobileObj1.year = 2016;
// Create another object of Mobile 
Mobile mobileObj2;
mobileObj2.brand = "OPPO";
mobileObj2.model = "A103";
mobileObj2.year = 2008;
// Print attribute values
cout << mobileObj1.brand << " " << mobileObj1.model << " " << mobileObj1.year << "\n";
cout << mobileObj2.brand << " " << mobileObj2.model << " " << mobileObj2.year << "\n";
return 0;
}