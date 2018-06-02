#include <stdlib.h>
#include <stdio.h>

int main(void) {
  int num;

  while (scanf("%d", &num) == 1)
    ;

  printf("skip integer input\n");

  return 0;
}
