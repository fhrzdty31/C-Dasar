#include <stdio.h>

int main(void) {
  printf("Program akan looping, akhiri dengan Ctrl-c ");

  for (;;) {
    printf("Menunggu ^c...\n");
  }

  return 0;
}