#include <stdlib.h>
#include <stdio.h>

int main(void){
  int num;
  char letter;
  float real;

  printf("scanf returned %d\n", scanf("%d %c %f", &num, &letter, &real));

  return 0;
}
