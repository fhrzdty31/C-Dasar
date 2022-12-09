#include <stdio.h>

int main(void) {
  int i;
  int j;

  printf("Cetak Sebanyak : ");
  scanf("%d", &j);

  for (i = 0; i < j; i++) {
    printf("Saya senang belajar bahasa C\n");
  }

  return 0;
}