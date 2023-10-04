#include <stdio.h>
#include <math.h>
int octalToDecimal(long oct) {
  int dec = 0, i = 0, rem;
  while (oct != 0) {
    rem = oct % 10;
    oct /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}
int main() {

  long oct = 1101;
  printf("%d",octalToDecimal(oct));

  return 0;
}
