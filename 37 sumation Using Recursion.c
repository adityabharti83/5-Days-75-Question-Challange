#include <stdio.h>
int addNumbers(int n) {
  if (n > 0)
    return n + addNumbers(n - 1);
  else
    return n;
}

int main() {
  int n=5;
  printf("Sum: %d", addNumbers(n));
  return 0;
}



