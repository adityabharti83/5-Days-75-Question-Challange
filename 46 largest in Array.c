#include <stdio.h>
int main() {
  int arr[10]={12,4,33,4,22,3,16,9};
  int largest = arr[0];
  int i;
  for (i = 1; i < 10 ; i++)
  	if (largest < arr[i])
    	largest = arr[i];

  printf("Largest element = %d", largest);

  return 0;
}

