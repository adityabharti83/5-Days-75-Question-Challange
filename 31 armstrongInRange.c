#include<stdio.h>
#include<math.h>
int isArmstrong(int n){
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
    if (n == result)	return 1;
    else	return 0;
}
int main()
{
    int a,b,i=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<b;i++){
    	if(isArmstrong(i))	printf("%d ",i);
	}
    return 0;
}
