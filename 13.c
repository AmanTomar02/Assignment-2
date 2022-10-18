// 13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

#include <stdio.h>

int main()
{
  int x, rem;
  printf("enter number :");
  scanf("%d", &x);
  rem = x % 10;
  x = x / 10;
  printf("The number is %d%d", rem, x);

  return 0;
}