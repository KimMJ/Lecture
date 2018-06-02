#include <stdlib.h>
#include <stdio.h>

int main(void){
  int num = 0;
  {
    int num = 1;
    printf("%d\n", num);
    num = 2;
  }
  printf("%d\n", num);

  return 0;
}
