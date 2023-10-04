#include <stdio.h>
int main() {

  char line[150];
  int vowels, consonant, digit, space;
  vowels = consonant = digit = space = 0;

  printf("Enter a line of string: ");
  gets(line);
  int i=0;
  while(line[i]!='\0'){

    line[i] = tolower(line[i]);

    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') vowels++;
    else if (line[i] >= '0' && line[i] <= '9') digit++;
    else if (line[i] == ' ') space++;
    else consonant++;
    i++;
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWhite spaces: %d", space);

  return 0;
}

