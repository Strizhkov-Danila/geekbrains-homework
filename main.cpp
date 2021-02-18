#include <iostream>

#define DIAPAZON(Var, Right) (((0 <= (Var)) && ((Var) < (Right))) ? true : false)

#define ARRAY_SIZE_m 10
#define ARRAY_SIZE_n 10
#define ARRAY_ELEMENTS(arr, m, n) (*(*(arr + m) + n))

#define AMOUNT_ELEMENTS_ARRAY(arr, type) (sizeof(arr) / sizeof(type))

int main (int argc, char** argv)
{
    // Exercise 1
    std :: cout << DIAPAZON(0, 24) << std :: endl;

    // Exercise 2
    int** array = new int* [ARRAY_SIZE_m];
    for (int i = 0; i < ARRAY_SIZE_m; i++)
        array[i] = new int [ARRAY_SIZE_n];

    std :: cout << ARRAY_ELEMENTS(array, 3, 4) << std :: endl;

    for (int i = 0; i < ARRAY_SIZE_m; i++)
        delete[]array[i];

    // Exercise 3
    int arr[ARRAY_SIZE_m][ARRAY_SIZE_n];
    std :: cout << "Amount of elements: " << AMOUNT_ELEMENTS_ARRAY(arr, int) << std :: endl;

    return 0;
}
