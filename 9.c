// . Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>

int main()
{
   int x;
   float f;
   char c;
   double d;

   printf("the size of integer %d is:",sizeof(x));
   printf("\nthe size of float %d is:",sizeof(f));
   printf("\nthe size of char %d is:",sizeof(c));
   printf("\nthe size of double  %d is:",sizeof(d));

  return 0;
}