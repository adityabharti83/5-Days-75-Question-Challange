#include<stdio.h>
long decimalToOctal(long dec){
	long oct = 0;
	int rem, i = 1;
  	while (dec != 0) {
    	rem = dec % 8;
    	dec /= 8;
    	oct += rem * i;
   		i *= 10;
  	}
	return oct;
}
int main(){
	long dec = 13;
	long oct = decimalToOctal(dec);
	printf("%d",oct);
}
