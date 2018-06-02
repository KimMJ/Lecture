#include <stdlib.h>
#include <stdio.h>

int main(void){
  int houseprice;
  houseprice = 249,500;
  //houseprice = 249;
  //500;
  printf("houseprice : %d\n", houseprice);

  houseprice = (249,500);
  printf("houseprice : %d\n", houseprice);
  
  return 0;
}
