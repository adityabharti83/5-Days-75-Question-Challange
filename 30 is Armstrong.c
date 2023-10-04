#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
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
    if (n == result)
        printf("Armstrong");
    else
        printf("not Armstrong");
    return 0;
}
