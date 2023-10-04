#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a;
    int rev=0;
    while (b!=0){
        rev = rev*10+b%10;
        b/=10;
    }
    if(a==rev) printf("palindrome");
    else printf("not a palindrome");
    
    return 0;
}