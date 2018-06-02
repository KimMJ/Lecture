#include <stdlib.h>
#include <stdio.h>

int main(void){
  //1
  int secs;
  for (secs = 5; secs > 0; secs--){
    printf("%d seconds!\n", secs);
  }
  printf("We have ignition!\n");

  //2
  int n;
  for (n = 2; n < 60; n = n + 13){
    printf("%d \n", n);
  }

  //3
  char ch;
  for (ch = 'a'; ch <= 'z'; ch++){
    printf("The ASCII value for %c is %d.\n", ch, ch);
  }

  //4
  int num;
  for (num = 1; num <= 6; num++){
    printf("num : %d\n", num);
  }

  for (num = 1; num * num * num <= 216; num++){
    printf("num : %d\n", num);
  }

  //5
  double debt;
  for (debt = 100.0; debt < 150.0; debt = debt * 1.1){
    printf("Your debt is now $%.2f.\n", debt);
  }

  //6
  int x;
  int y = 55;
  for (x = 1; y <= 75; y = (++x * 5) + 50){
    printf("%10d %10d\n", x, y);
  } 

  //7
  int ans;
  ans = 2;
  for (n = 3; ans <= 25; ){
    ans = ans * n;
  }
  printf("n = %d; ans = %d.\n", n, ans);

  for ( ; ; ){
    printf("I want some action\n");
  }

  //8
  num = 0;
  for (printf("Keep entering numbers!\n"); num != 6; ){
    scanf("%d", &num);
  }
  printf("That's the one I want!\n");

  //9
  int delta = 2;
  for (n = 1; n < 10000; n = n + delta){
    delta = n * delta
  }
  
}
