#include <stdio.h>


int main(void){
  long long sum =0;
  for(long long i = 3; i < 1000; i++){
    if((i%3) == 0){
      sum += i;
    }
    else if((i%5) == 0){
      sum += i;
    }
  }
  printf("%lld", sum);
  printf("%lld", sum);
}
