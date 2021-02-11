#include <iostream> 
#define ARRAY_SIZE 5

void Print_Array (int Array[]);
void Inverse_Array (int Array[]);
void Agregate_Array (int Array[]);
bool Check_Balance(int Array[]);

int main (int argc, char** argv)
{ /*
	// Exercise 1
	int arr[ARRAY_SIZE] = {1, 0, 1, 1, 0, 0, 0, 1};
	
	Print_Array(arr);

	Inverse_Array(arr);

	Print_Array(arr);

	// Exercise 2
	int arr2[ARRAY_SIZE] = {0};

	Agregate_Array(arr2);

	Print_Array(arr2);
*/
	// Exercise 3
	int arr3[ARRAY_SIZE] = {10, 1, 2, 3, 4};
	int arr4[ARRAY_SIZE] = {1, 1, 1, 2, 1};
	int arr5[ARRAY_SIZE] = {2, 1, 1, 2, 1};
	Print_Array(arr3);
	Print_Array(arr4);
	Print_Array(arr5);

	std :: cout << Check_Balance(arr3) << " - Result arr3" << std :: endl;
	std :: cout << Check_Balance(arr4) << " - Result arr4" << std :: endl;
	std :: cout << Check_Balance(arr5) << " - Result arr5" << std :: endl;


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

bool Check_Balance (int Array[])
{
	int Left_Check = Array[0];
        int Right_Check = Array[ARRAY_SIZE - 1];
	bool result = false;
	int i = 0, j = ARRAY_SIZE - 1;
		
	while (!result) 
	{
		if (Left_Check > Right_Check && (j - 1 != i))
		{
			Left_Check -= Right_Check;
			j--;
			Right_Check = Array[j];
		}

		if (Left_Check < Right_Check && (i + 1 != j))
                {
                        Right_Check -= Left_Check;
                        i++;
                        Left_Check = Array[i];
                }

		if (Left_Check == Right_Check && (i + 1 != j))
                {
                        i++;
			j--;
                        Left_Check = Array[i];
			Right_Check = Array[j];
                }
		
		if (i == j)
			break;

		if (Left_Check == Right_Check && (i + 1 == j))
               		result = true;

		if (Left_Check != Right_Check && (i + 1 == j)) 
			break;
	}

	return result;
}


