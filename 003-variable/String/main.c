#include <stdio.h>

int main(void) {
  char c = 65;
  char c1;
  
  printf("Karakter = %c\n", c);

  c1 = 'z';
  printf("Kaarakter = %c\n\n", c1);

  printf ("Karakter dalam kode ASCII = %d\n", c);
  printf ("Karakter sebagai huruf = %c\n", c);
  printf ("Karakter dalam kode ASCII = %d\n", c1);
  printf ("Karakter sebagai huruf = %c\n", c1);
  
  return 0;
}