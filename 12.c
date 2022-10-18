// . Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include <stdio.h>

int main()
{
    float usd , inr;
    printf("enter INR :\n");
    scanf("%f", &inr);
    usd = 76.89 / inr;
    printf("\nin usd rupee :%f", usd);

    usd = 76.89 * inr;
    printf("\nin indian rupee :%f", usd);

    return 0;
} 