
#include <iostream>

using namespace std;

int main (int argc, char** argv) {
	
	// Exercise 1
	const int a = 25, b = 54, c = 194;
	const double d = 43;
	double result;
	result = a * ( b + (c / d) );
	cout << "result = " << result << endl;

	// Exercise 2
	// int number = 94;
	int number = 13;
	
	cout << ((number > 21) ? (number - 21) : (42 - number * 2)) << endl;
	
	

	return 0;
}
