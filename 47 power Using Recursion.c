#include <stdio.h>
int power(int base, int pow) {
	if(pow>0)
		return base*power(base, pow-1);
	else
		return 1;
}
int main() {
    int base=10, pow=2, result;
    result = power(base, pow);
    printf("%d", result);
    return 0;
}



