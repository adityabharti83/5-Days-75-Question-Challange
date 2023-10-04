#include <stdio.h>     

#define BORN 2000      

int age(int current);  

int main(void)          
{
  int current = 2021;
  printf("Age: %d", age(current));
  return 0;
}

int age(int current) { 
    return current - BORN;
}
