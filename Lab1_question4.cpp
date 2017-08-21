#include <iostream>
using namespace std;
int main() 
{
	double l,b,perimeter;
	cout << "Enter length and breadth of rectangle" << "\n";
	cin >> l >> b;
	perimeter=2*(l+b);
	cout << "The perimeter is " << perimeter;
	return 0;
}
