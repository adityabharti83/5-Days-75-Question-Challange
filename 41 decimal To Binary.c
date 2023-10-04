#include<stdio.h>
long decimalToBinary(long dec){
	long bin = 0;
	int rem, i = 1;
  	while (dec != 0) {
    	rem = dec % 2;
    	dec /= 2;
    	bin += rem * i;
   		i *= 10;
  	}
	return bin;
}
int main(){
	long dec = 13;
	long bin = decimalToBinary(dec);
	printf("%d",bin);
}
