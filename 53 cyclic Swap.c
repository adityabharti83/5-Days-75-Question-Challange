#include <stdio.h>
void cyclicSwap(int *a, int *b, int *c) {
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
int main() {
    int a, b, c;

    printf("Enter a, b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);
    cyclicSwap(&a, &b, &c);

    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);

    return 0;
}

