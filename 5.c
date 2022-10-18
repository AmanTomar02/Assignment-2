// 5. Write a program to input a three-digit number and display the sum of the digits

#include <stdio.h>
// unsig for loop :
int main()
{
    int x, rem = 0, sum = 0;

    printf("enter the number :");
    scanf("%d", &x);

    for (int i = x; x > 0; x = x / 10)
    {
        rem = x %10;
        sum = sum + rem;
    }

    printf("the sum is %d :", sum);
    return 0;
}