#include <stdio.h>

int main(void){
  long long sum = 0;
  for(long long i = 1; i < 772000; i+=2){
  sum += i*i;
  }
  printf("%lld", sum);
  return 0;
}
