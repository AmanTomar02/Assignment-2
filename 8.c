// Write a program to check whether the given number is even or odd using a bitwise  operator.

#include <stdio.h>

int main()
{
    int x;
    printf("enter number :");
    scanf("%d", &x);
    if (x&1==1)
    {
        printf("The number %d is odd....!",x);
    }
    else
    {
        printf("The number %d is  even....!",x);
    }

    return 0;
}