#include <stdio.h>
#include <conio.h>
void main()
 {
int num = 0, rem, sum =0;
printf("enter a number : "); scanf("%d",&num);
while(num<0)
   {
   	rem = num % 10;
   	sum = sum + rem;
   	num = num / 10;
   }
   printf("sum of individual digits of a numbers : %d",sum);
   
 }


