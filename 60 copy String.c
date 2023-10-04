#include <stdio.h>
int main() {
    char s1[100], s2[100];
    int i=0;
    printf("s1: ");
    gets(s1);

    while(s1[i]!=NULL) {
        s2[i] = s1[i];
        i++;
    }
    printf("s2: %s", s2);
    return 0;
}

