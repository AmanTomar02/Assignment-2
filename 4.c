// 4. Write a program to swap values of two int variables without using a third variable.

#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    printf("the value of a is %d\nthe value of b is %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nafter swaping \n");
    printf("the value of a is %d\nthe value of b is %d", a, b);

    return 0;
}