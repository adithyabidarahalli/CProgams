#include<stdio.h>
#include<conio.h>
int main()
{
int a, b, c, i, terms;
printf("enter number of terms: "); scanf("%d",&terms);
a = 0 ; b = 1; c = 0;
printf("the Fibonacci terms are....\t");
for(i=0;i<=terms;i++)
{
	printf("%d\t",c);
	a = b;
	b = c;
	c = a + b;
}
return 0;
}

