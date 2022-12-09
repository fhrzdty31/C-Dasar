#include <stdio.h>

int main(void) {
  int x = 5;
  int y = 8;

  printf("Ini nilai x + y  : %d \n", x + y);
  printf("Ini nilai x - y  : %d \n", x - y);
  printf("Ini nilai x * y  : %d \n", x * y);
  printf("Ini nilai x / y  : %d \n", x / y);
  printf("Ini nilai y / x  : %d \n", y / x);
  printf("Ini nilai x mod  y  : %d \n\n", x % y);

  float a = x, b = y;

  printf("Ini nilai a / b  : %5.2f \n", a / b);
  printf("Ini nilai b / a  : %5.2f \n\n", b / a);

  printf("Ini niai x + x + x : %d \n", x + x + x);
  printf("Ini niai x * x + x : %d \n", x * x + x);

  return 0;
}