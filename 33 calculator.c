#include<stdio.h>
#include<math.h>
void add()
{
	int a,b;
	printf("enter a no.: ");
	scanf("%d",&a);
	printf("enter a no.: ");
	scanf("%d",b);
	printf("addition: %d",a+b);
}
void sub()
{
	int a,b;
	printf("enter a no: ");
	scanf("%d",&a);
	printf("enter a no: ");
	scanf("%d",&b);
	printf("substraction: %d",a-b);
}
void mul()
{
	int a,b;
	printf("enter a no: ");
	scanf("%d",&a);
	printf("enter a no: ");
	scanf("%d",&b);	
	printf("multiplication: %d",a*b);
}
void div()
{
	float a,b;
	printf("enter a divident:");
	scanf("%f",&a);
	printf("enter a divisor:");
	scanf("%f",&b);
	printf("division: %.2f",a/b);
}
void percentage()
{
	float a,b;
	printf("enter obtain marks: ");
	scanf("%f",&a);
	printf("enter total marks: ");
	scanf("%f",&b);
	printf("percentage: %.2f",(a/b)*100);
}
void fact()
{
 int a,b,c=1;
 printf("enter a no.: ");
 scanf("%d",&a);
 printf("factorial: ");
 for(b=2;b<=a;b++)
 { 
    c=c*b;
 }
 printf("%d\n",c);
}
void modules()
{
 int a,b,c;
 c=a%b;
 printf("enter dividend: ");
 scanf("%d",&a);
 printf("enter divisor: ");
 scanf("%d",&b);
 printf("modules: %d",c);
}
void square()
{
 int a;
 printf("enter a no.: ");
 scanf("%d",&a);
 printf("Square: %d",a*a);
}
void cube()
{
 int a;
 printf("enter a no.: ");
 scanf("%d",&a);
 printf("Cube: %d",a*a*a);
}
void squareroot()
{ 
 float a;
 printf("enter a no.:");
 scanf("%f",&a);
 printf("square root: %.2f",sqrt(a));
}
int main()
#define p printf
#define s scanf
#define c case
#define f break
{
	int n;
	 p("enter opration you want to do!\n");
 	p("(enter 1 for addition, 2 for subtaction, 3 for multiplication, 4 for division, 5 for percentage, 6 for factorial, 7 for modules(remainder), 8 to find square, 9 to find cube,10 for squareroot): ");
  s("%d",&n);
	switch(n)
	{
		c 1: add();
		f;
		c 2: sub();
		f;
		c 3: mul();
		f;
		c 4: div();
		f;
		c 5: percentage();
		f;
        c 6: fact();
  		f;
 		c 7: modules();
  		f;
  		c 8: square();
  		f; 
 	 	c 9: cube();
  		f;
  		c 10: squareroot();
 		f;
		default : p("pls try again your enter operation is not avilable.");
	return 0;
	}
}
