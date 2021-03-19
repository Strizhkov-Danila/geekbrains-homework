#ifndef WORK_WITH_2D_ARRAY_H_INCLUDED
#define WORK_WITH_2D_ARRAY_H_INCLUDED

/*
* Project name: Work_With_2D_Array.h
* Author: Strizhkov Danila
* Code::Blocks 17.12
* 18.03.2021
*/


/*
*   ������� ��� ������ � ���������� ��������
*/
// ������������ ������������� �������
// ���������: (������ �� ������, ����� ���������)
int* Init_1D_Array (int* arr, const int elem)
{
    arr = (int*) calloc(sizeof(int), elem);

    return arr;
}

// ���������� ������� ���������������� �������
// ���������: (������ �� ������, ����� ���������, �� ������ �����, �� ������ �����)
void Fill_RNG_1D_Array (int* arr, const int elem, int diapazon_left, int diapazon_right)
{
    for (int i = 0; i < elem; i++)
            *(arr + i) = rand() % (diapazon_right - diapazon_left) + diapazon_left;
}

// ������ �������� � ������ �������
// ���������: (������ �� ������, � ��������, ��������)
void Set_1D_Array (int* arr, const int elem, int val)
{
    *(arr + elem) = val;
}

// �������� �������� �� ������ �������
// ���������: (������ �� ������, � ��������)
int Get_1D_Array (int* arr, const int elem)
{
    return *(arr + elem);
}

// ���������� ������� ������� ��������
// ���������: (������ �� ������, ����� ���������)
void Bubble_Sort_1D_Array (int* arr, const int elem)
{
    for (int bub = 0; bub < elem; bub++)
    {
        for (int i = 0; i < elem - 1; i++)
        {
            if (*(arr + i) > *(arr + i + 1))
                Swap_Elem_Array((arr + i), (arr + i + 1));
        }
    }
}

// ����� ������� �� �����
// ���������: (������ �� ������, ����� ���������, ���������)
void Print_1D_Array (int* arr, const int elem, int width)
{
    for (int i = 0; i < elem; i++)
        printf("%*d", width, *(arr + i));
    puts("");
}

/*----------------------------------------------------------------------------------------------------*/

/*
*   ������� ��� ������ � ��������� ��������
*/

// ������������ ������������� �������
// ���������: (������ �� ������, ����� �����, ����� ��������)
int** Init_2D_Array (int** arr, const int row, const int col)
{
    arr = (int**) calloc(sizeof(int*), row);
    for (int i = 0; i < row; i++)
        *(arr + i) = (int*) calloc(sizeof(int), col);

    return arr;
}

// ���������� ����� ������� ��������� �������� (��������: ���������)
// ���������: (������ �� ������, ����� �����, ����� ��������, ������ ����������)
void Fill_2D_Array (int** arr, const int row, const int col, int symbols)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            *((*(arr + i)) + j) = symbols;
}

// ���������� ������� ���������������� �������
// ���������: (������ �� ������, ����� �����, ����� ��������, �� ������ �����, �� ������ �����)
void Fill_RNG_2D_Array (int** arr, const int row, const int col, int diapazon_left, int diapazon_right)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            *((*(arr + i)) + j) = rand() % (diapazon_right - diapazon_left) + diapazon_left;
}

// ������ �������� � ������ �������
// ���������: (������ �� ������, � ������, � �������, ��������)
void Set_2D_Array (int** arr, int m, int n, int val)
{
    *(*(arr + m) + n) = val;
}

// �������� �������� �� ������ �������
// ���������: (������ �� ������, � ������, � �������)
int Get_2D_Array (int** arr, int m, int n)
{
    return *(*(arr + m) + n);
}

// ���������� ������� �������� (�� �����������)
// ���������: (������ �� ������, ����� �����, ����� ��������)
void Bubble_Sort_2D_Array (int** arr, const int row, const int col)
{
    for (int nightmare = 0; nightmare < row * col; nightmare++)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col - 1; j++)
            {
                if (i > 0 && arr[i - 1][col - 1] > arr[i][j])
                    Swap_Elem_Array(&arr[i][j], &arr[i - 1][col - 1]);
                if (arr[i][j] > arr[i][j + 1])
                    Swap_Elem_Array(&arr[i][j], &arr[i][j + 1]);
            }

        }
    }
}

// ����� ������� �� �����
// ���������: (������ �� ������, ����� �����, ����� ��������, ���������)
void Print_2D_Array (int** arr, const int row, const int col, int width)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%*d", width, *((*(arr + i)) + j));
        puts("");
    }
    puts("");
}

// ������� ������, ������� ��������
// ���������: (������ �� ������, ����� �����, ����� ��������)
void Free_2D_Array (int** arr, const int row, const int col)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            free(*arr);
    free(arr);
}

/*----------------------------------------------------------------------------------------------------*/
/*
*   �����-������� ��� ������ � ���������
*/
// �������� ������� �������� �������
// ���������: (������ �� ������ �������, ������ �� ������ �������)
void Swap_Elem_Array (int *a, int *b)
{
    (*a) ^= (*b);
    (*b) ^= (*a);
    (*a) ^= (*b);
}

#endif // WORK_WITH_2D_ARRAY_H_INCLUDED
