#include <stdio.h>
int main() {
    char s[] = "Programming454is33fun";
    int i,j,k;
    while(s[i]!=NULL){
    	while(!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] == '\0')){
    		for (j = i; s[j] != '\0'; ++j) {
            s[j] = s[j + 1];
         }
         s[j]='\0';
		}
		i++;
	}
	printf("%s",s);
    return 0;
}

