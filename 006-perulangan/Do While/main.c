#include <stdio.h>

int main(void) {
  int i = 0;
  int j;

  printf("Cetak Sebanyak : ");
  scanf("%d", &j);

  do {
    printf("Saya senang belajar bahasa C\n");
    i++;
  } while (i < j);

  return 0;
}