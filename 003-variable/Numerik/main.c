#include <stdio.h>

int main(void)
{
  int i;

  i = 5;
  printf("ini nilai i : %i\n", i);

  i = i * 20;
  printf("ini nilai i : %i\n\n", i);

  float j = 0.25;
  printf("nilai j adalah %f\n", j);
  printf("nilai j adalah %5.2f\n", j);

  return 0;
}