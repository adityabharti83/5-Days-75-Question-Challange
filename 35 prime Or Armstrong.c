#include <stdio.h>
#include<math.h>
int isPrime(int n)
{
	int i;
    if (n == 1 || n == 0)   return 0;
    for ( i = 2; i <= n / 2; i++)
        if (n % i == 0) return 0;
    return 1;
}
int isArmstrong(int n)
{
    int a = n, c = 0;
    while (a != 0)
    {
        c++;
        a /= 10;
    }
    int b = n, result = 0, res = 0;
    while (b != 0)
    {
        res = b % 10;
        result = result + pow(res, c);
        b /= 10;
    }
    if (n == result)    return 1;
    else    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (isPrime(n)) printf("prime\n");
    else    printf("not prime\n");
    if (isArmstrong(n)) printf("Armstrong");
    else    printf("Not Armstrong");
    return 0;
}
