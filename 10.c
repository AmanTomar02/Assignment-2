// Write a program to make the last digit of a number stored in a variable as zero.(Example - if x=2345 then make it x=2340)

#include <stdio.h>

int main()
{
    int x, rem = 0;

    printf("enter number :");
    scanf("%d", &x);

    rem = x % 10;
    x = x - rem;

    printf("\nNow the number is :%d", x);

    return 0;
}