#include <stdio.h>

int main(void)
{
  int a;

  printf("Masukkan nilai integer : ");
  scanf("%d", &a);

  if (a > 0)
  {
    printf("Nilai %d lebih dari 0\n", a);
  }

  return 0;
}