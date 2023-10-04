#include <stdio.h>
int addNumbers(int n) {
  if (n == 0)
    return 1;
  return n*addNumbers(n-1);
}

int main() {
  int n=5;
  printf("Sum: %d", addNumbers(n));
  return 0;
}
