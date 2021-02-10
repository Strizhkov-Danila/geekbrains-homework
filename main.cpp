#include <iostream> 
#define ARRAY_SIZE 8

void Print_Array (int Array[]);
void Inverse_Array (int Array[]);
void Agregate_Array (int Array[]);

int main (int argc, char** argv)
{
	// Exercise 1
	int arr[ARRAY_SIZE] = {1, 0, 1, 1, 0, 0, 0, 1};
	
	Print_Array(arr);

	Inverse_Array(arr);

	Print_Array(arr);

	// Exercise 2
	int arr2[ARRAY_SIZE] = {0};

	Agregate_Array(arr2);

	Print_Array(arr2);

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

void Agregate_Array(int Array[])
{
	for (int i = 0, j = 1; i < ARRAY_SIZE; i++, j+= 3)
		Array[i] = j;
}













