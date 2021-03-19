#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Work_With_Array.h"

int main (int argc, char** argv)
{
// Exercise 1
    const int row = 10;
    const int col = 10;
    int** array = Init_2D_Array(array, row, col);
    Fill_RNG_2D_Array(array, row, col, 1, 100);
    Print_2D_Array(array, row, col, 4);
    Bubble_Sort_2D_Array(array, row, col);
    Print_2D_Array(array, row, col, 4);

    Free_2D_Array(array, row, col);

//  Exercise 3
    const int elem = 11;
    double arr[elem];
    for (int i = 0; i < elem; i++)
        scanf("%lf", &arr[i]);
    for (int i = elem - 1; i >= 0; i--)
    {
        arr[i] = sqrt(fabs(arr[i])) + 5 * pow(arr[i], 3);
        if (arr [i] > 400)
            printf("%5.3lf > 400\n", arr[i]);
        else
            printf("%5.3lf\n", arr[i]);
    }

// Test
    puts("Input: arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}");
    puts("Output 10: 6658.317 > 400");
    puts("Output 9: 5003.162 > 400");
    puts("Output 8: 3648.000 > 400");
    puts("Output 7: 2562.828 > 400");
    puts("Output 6: 1717.646 > 400");
    puts("Output 5: 1082.449 > 400");
    puts("Output 4: 627.236 > 400");
    puts("Output 3: 322.000");
    puts("Output 2: 136.732");
    puts("Output 1: 41.414");
    puts("Output 0: 6.000");

    return 0;
}
