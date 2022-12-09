#include <stdio.h>

int main(void) {
  int uang = 6000;
  int hujan = 0;

  printf("uang 5k+ dan tidak hujan: %d \n", (uang > 5000) && (!hujan));

  hujan = 1;

  printf("uang 5k+ dan tidak hujan: %d \n", (uang > 5000) && (!hujan));

  return 0;
}