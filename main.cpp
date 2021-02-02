
#include <iostream>
#include "operands.cpp"

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
	
	// Exercise 3
	
	result = e * ( f + (g / h) );
 	cout << "result = " << result << endl;
	
	//Exercise 4
	int arr[3][3][3] =  {
			    {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}},
			    {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
			    {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
			    };
	int* pointer = arr[0][0];
	// cout << "&arr[0][0][0]" << pointer << endl;
	// cout << "arr[0][0][0] = " << *pointer << endl;
	// cout << "&arr[1][1][1] = " << (pointer + 3 + 3 + 3 + 3 + 1) << endl;
	cout << "arr[1][1][1] = " << *(pointer + 3 + 3 + 3 + 3 + 1) << endl;

	return 0;
}
