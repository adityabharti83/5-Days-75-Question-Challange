#include <stdio.h>

int gcd(int a, int b) {
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}

int main() {
    int a=15, b=10;
    printf("G.C.D. %d",gcd(a, b));
    return 0;
}
