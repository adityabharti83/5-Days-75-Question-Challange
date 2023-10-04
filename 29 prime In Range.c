#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int flag = 0;
    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j <= b / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ",i);
    }
    return 0;
}