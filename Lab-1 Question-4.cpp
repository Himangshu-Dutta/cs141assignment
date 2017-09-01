#include <iostream>
using namespace std;

int main() {
	double lenth, breadth; 
	cout << "enter the lenth of the rectangle" << endl;
	cin >> lenth;
	cout<< "enter the breadth of the rectangle"<< endl;
	cin >> breadth;
	cout << "perimeter of the rectangle is " << "\t" << 2*(lenth + breadth) <<endl;
	
	return 0;
}