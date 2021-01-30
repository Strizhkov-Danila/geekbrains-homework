#include <iostream>

using namespace std;

extern int exi;
static int si;

void change ();

int main () {
	char ch1 = 75, ch2 = 'K';
	short sh;
	int i1 = 0, i2;
	unsigned int ui = 1324;
	float f;

	exi = 35;
	si = -32;
	sh = -12354;
	i2 = -1297;
	f = 24.694;

	void change();
	
	// Exerise 2
	enum null_cross {Null = 79, Cross = 88};

	// Exercise 3
	char nac[3][3] = {{Null, Cross, Cross}, {Null, Null, Cross}, {Cross, Null, Cross}};
	cout << nac[0][0] << " " << nac[0][1] << " " << nac[0][2] << endl;
	cout << nac[1][0] << " " << nac[1][1] << " " << nac[1][2] << endl;
	cout << nac[2][0] << " " << nac[2][1] << " " << nac[2][2] << endl;
	
	return 0;
}

