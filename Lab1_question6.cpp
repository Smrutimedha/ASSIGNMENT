#include <iostream>
using namespace std;
int main()
{
	double r,cir,area;
	cout << "Enter radius of circle" << "\n";
	cin >> r;
	cir=2*3.141*r;
	area=3.141*r*r;
	cout << "The circumference is " << cir << "\n";
	cout << "The area is " << area;
	return 0;
}
