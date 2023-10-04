#include <stdio.h>
int main(){
    int i,j,count=1;
    for(i=0;i<5;i++){
    	for(j=0;j<i+1;j++){
    		printf("%d",count);
    		count++;
		}
		printf("\n");
	}
	return 0;
}
