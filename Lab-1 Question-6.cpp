#include <iostream>
using namespace std;

int main() {
	double r;
	cout << "enter the radius of the circle " << endl;
	cin >>r;
	cout <<"diameter of the circle is "<<"\t" <<2*r <<endl
	<< "circumference of the circle is " <<"\t" << 2*3.14159*r <<endl
	<< "area of the circle is " <<"\t" <<3.14159*r*r << endl;
	return 0;
}