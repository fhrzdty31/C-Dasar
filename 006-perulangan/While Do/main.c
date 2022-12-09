#include <stdio.h>

int main(void)
{
  int i = 0;
  int j;

  printf("Cetak Sebanyak : ");
  scanf("%d", &j);

  while (i < j)
  {
    printf("Saya senang belajar bahasa C\n");
    i++;
  }

  return 0;
}