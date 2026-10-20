#include <stdio.h>


int main(void){
  long long sum = 0;
  long long fib1 = 1;
  long long fib2 = 2;
  sum += fib2;
  while((fib1 <= 4000000) && (fib2 <= 4000000)){

    if((fib1 + fib2) <= 4000000){
      fib1 += fib1 + fib2;
      }
    if((fib1%2) == 0){
      sum += fib1;
    }
    if((fib1 + fib2) <= 4000000){
      fib2 += fib1 + fib2;
      }
    if((fib2%2) == 0){
      sum += fib2;
    }
  } 
  printf("%lld", sum);
}
