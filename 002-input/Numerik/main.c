#include <stdio.h>

int main(void)
{
  int a;
  float x;

  printf("Contoh membaca dan menulis, ketiknilai integer : ");
  scanf("%d", &a);
  printf("Nilai yang dibaca : %d\n", a);

  printf("ketik nilai bilangan riil : ");
  scanf("%f", &x);
  printf("Nilai yang dibaca : %f\n", x);

  return 0;
}