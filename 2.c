#include <stdio.h>

int main()
{
  int num;
  printf("lsit of number without last digit  :\n");
  scanf("%d", &num);
  printf("lsit of %d  without last digit is %d", num, num / 10);

  return 0;
}