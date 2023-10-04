#include <stdio.h>
#include <math.h>
int binaryToDecimal(long bin) {
  int dec = 0, i = 0, rem;
  while (bin != 0) {
    rem = bin % 10;
    bin /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}
int main() {

  long bin = 1101;
  printf("%d",binaryToDecimal(bin));

  return 0;
}

