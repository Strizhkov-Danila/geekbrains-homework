#include <iostream> 
#define ARRAY_SIZE 10

void Print_Array (int Array[]);
void Inverse_Array (int Array[]);

int main (int argc, char** argv)
{
	// Exercise 1
	int arr[ARRAY_SIZE] = {1, 0, 1, 1, 0, 0, 0, 1, 1, 0};
	
	Print_Array(arr);

	Inverse_Array(arr);

	Print_Array(arr);

	return 0;
}

void Print_Array (int Array[])
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	std :: cout << Array[i] << " ";

	std :: cout << std :: endl;
}

void Inverse_Array (int Array[])
{
	for (int i = 0; i < ARRAY_SIZE; i++) 
		Array[i] ^= 1;
}

