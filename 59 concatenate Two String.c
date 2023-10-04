#include <stdio.h>
int main() {
  char s1[100] = "programming ", s2[] = "is awesome";
  int length, j;
  
  length = 0;
  while (s1[length] != NULL) {
    ++length;
  }
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  printf("After concatenation: ");
  puts(s1);

  return 0;
}
