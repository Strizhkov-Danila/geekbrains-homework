
#include <iostream>

int main (int argc, char** argv)
{
	// Exercise 1
	int a = 7, b = 3;

	if (10 <= a + b && a + b <= 20)
		std :: cout << "true" << std :: endl;
	else
		std :: cout << "false" << std :: endl;

	// Exercise 2
	int counter = 0;

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
			counter++;
		else 
			continue;
		if (counter > 2)
		{
			std :: cout << a << " is not prime number" << std :: endl;
			break;
		}
	}

	if (counter == 2)
		std :: cout << a << " is prime number" << std :: endl;
	
	// Exercise 3
	if (((a == 10) && (b == 10)) || (a + b == 10))
		std :: cout << "true" << std :: endl;
	else
		std :: cout << "false" << std :: endl;
	
	// Exercise 4
	int leapyear = 0;
	for (int i = 0; i <= 10000; i++)
	{
		if (i % 400 == 0)
		{
			std :: cout << i << " is leap year" << std :: endl;
			leapyear++;
		}
		if (i % 100 == 0)
			continue;
		else 
		{ 
			if (i % 4 == 0)
			{
				std :: cout << i << " is leap year" << std :: endl;
				leapyear++;
			}
		}
	}
	std :: cout << "From 0 to 10000 there were " << leapyear << " leap years" << std :: endl;


	return 0;
}
