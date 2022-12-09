#include <stdio.h>

int main(void)
{
  int i;
  i = 3;

  printf("Nilai i : %d, %d\n", i, i++);

  i = 3;

  printf("%d\n", ++i);
  printf("%d\n", --i);
  printf("%d\n", --i);

  return 0;
}