#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rev=0;
    while (a!=0){
        rev = rev*10+a%10;
        a/=10;
    }
    printf("%d",rev);
    
    return 0;
}