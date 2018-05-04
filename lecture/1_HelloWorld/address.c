#include <stdlib.h>
#include <stdio.h>

int main(void){
  int num;
  int array[10];
  char letter;
  char letters[10];

  printf("%x\n", &num);
  printf("%x\n", array);
  printf("%x\n", &array[0]);
  printf("%x\n", &letter);
  printf("%x\n", letters);
  printf("%x\n", &letters[0]);
  

  return 0;
}
