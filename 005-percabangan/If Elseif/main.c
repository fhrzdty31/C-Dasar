#include <stdio.h>

int main(void) {
  int a;

  printf("Masukkan nilai integer : ");
  scanf("%d", &a);

  if (a > 0) {
    printf("Nilai %d adalah positif\n", a);
  }
  if (a < 0) {
    printf("Nilai %d adalah negatif\n", a);
  }
  if (a == 0) {
    printf("Nilai %d adalah nol\n", a);
  }

  return 0;
}