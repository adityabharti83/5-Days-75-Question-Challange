#include <stdio.h>
int checkPrimeNumber(int n) {
  int j, flag = 1;

  for (j = 2; j <= n / 2; ++j) {

    if (n % j == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}
int main() {

  int n1, n2, i;

  printf("Enter two positive integers: ");
  scanf("%d %d", &n1, &n2);
  for (i = n1 + 1; i < n2; ++i) {

    if (checkPrimeNumber(i)) {
      printf("%d ", i);
    }
  }
  
  return 0;
}

