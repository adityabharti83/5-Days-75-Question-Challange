#include <stdio.h>
int main() {
  int a[10]={5,5,5,5,5,5,5,5,5,5};
  int sum=0;
  int i;
  for (i = 0; i < 10 ; i++)
  	sum+=a[i];

  printf("Largest element = %d",(int)(sum/10));

  return 0;
}

