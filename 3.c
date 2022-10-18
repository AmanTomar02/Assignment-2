#include <stdio.h>

int main()
{
    int a = 10, b = 5, temp = 0;
    printf("the value of a is %d \nthe value of b is %d", a, b);
    temp = a;
    a = b;
    b = temp;

    printf("\nthe value of a is %d \nthe value of b is %d", a, b);
    return 0;
}