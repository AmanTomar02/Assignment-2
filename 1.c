#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;
    printf("enter number :\n");
    scanf("%d", &num);
    printf("unit digit of %d is %d",num, num % 10);

    return 0;
}