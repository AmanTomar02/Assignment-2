// . Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)

#include <stdio.h>

int main()
{
    int num, digit;
    printf("enter number:\n");
    scanf("%d", &num);
    printf("enter digit:\n");
    scanf("%d", &digit);

    printf("%d%d", num, digit);

    return 0;
}