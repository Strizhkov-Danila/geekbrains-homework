#include <iostream> 
#define ARRAY_SIZE 8

void Print_Array    (int Array[]);

void Inverse_Array  (int Array[]);

void Agregate_Array (int Array[]);

bool Check_Balance  (int Array[]);

void Shift_Elements (int Array[], int n);

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

	// Exercise 3
	int arr3[ARRAY_SIZE] = {10, 1, 2, 3, 4, 4, 8};
	Print_Array(arr3);

	std :: cout << Check_Balance(arr3) << " - Result arr3" << std :: endl;

	// Exercise 4
	int arr4[ARRAY_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7};

	Print_Array(arr4);

	Shift_Elements(arr4, 3);

	Print_Array(arr4);

	Shift_Elements(arr4, -3);

        Print_Array(arr4);



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

void Shift_Elements (int Array[], int n)
{
	int Some_Array[ARRAY_SIZE] = {0};

	if (n > 0)
	{
		for (int i = ARRAY_SIZE - 1, j = 0, k = n, m = n - 1; i >= 0; i--, j++, k++, m--)
		{
			if (m >= 0)
				Some_Array[m] = Array [i];
			
			if (k < ARRAY_SIZE)
				Some_Array[k] = Array[j];
		}

		for (int i = 0; i < ARRAY_SIZE; i++)
			Array[i] = Some_Array[i];
	}

	 if (n < 0)
        {
                for (int i = ARRAY_SIZE + n, j = 0, k = ARRAY_SIZE + n - 1, m = ARRAY_SIZE - 1; j < ARRAY_SIZE; i++, j++, k--, m--)
                {
                        if (i < ARRAY_SIZE)
				Some_Array[i] = Array[j];
			if (k >= 0)
				Some_Array[k] = Array[m];
                }

                for (int i = 0; i < ARRAY_SIZE; i++)
                        Array[i] = Some_Array[i];
        }

}


















