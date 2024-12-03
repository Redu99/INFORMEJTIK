#include <iostream>
using namespace std;
int main()[
float waga;
float wzrost;
cout << "podaj wzrost:"; <<endl;
cin >> wzrost;
cout << "podaj wage:"; <<endl;
cin >> waga;
int BMI;
BMI = waga / (wzrost*wzrost);
if (BMI<=18.5) {
cout <<"niedowaga"<< endl;	
}
else if (BMI>=18.5) && (BMI <=24.5)) [
cout <<"w normie"<< endl;
]
else if (BMI>=25) && (BMI<=29.9))[
cout <<"nadwaga"<< endl;
]
else if (BMI>=30) [
cout <<"otyłość"<< endl;
]

]