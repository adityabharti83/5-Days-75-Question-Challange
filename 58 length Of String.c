#include <stdio.h>
int main() {
    char s[] = "Programming is fun";
    int i=0;

    while(s[i]!=NULL)
    	i++;
    
    printf("Length: %d", i);
    return 0;
}

