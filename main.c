#include <stdio.h>

int Prime_Number(int);

int main (int argc, char** argv)
{
    int num;

    puts("Enter the number");
    scanf("%d", &num);

    if (Prime_Number(num))
        printf("%d - Prime number!", num);
    else
        printf("%d is not prime number", num);

    return 0;
}

int Prime_Number (int a)
{
    int count = 0;
    int check = 1;

    for (int i = 1; i < a; i ++)
    {
        if (a % i == 0)
            count++;
        if (count > 1)
        {
            check = 0;
            break;
        }
    }

    return check;
}
