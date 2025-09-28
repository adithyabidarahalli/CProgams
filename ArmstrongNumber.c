#include<stdio.h>
#include<conio.h>
int main()
{
int sum=0, num, rem = 0, temp;
again:
printf("\nenter an integer:"); scanf("%d",&num);
temp = num;
while(num!=0)
{
	rem = num%10;
	num = num/10;sum = sum +(rem*rem*rem);
	
}
if(sum==temp)
 printf("%d is an armstrong number",temp);
 else printf("%d is not an armstrong numkber\n",temp);

 goto again;
return 0;
}

// This code checks if a number is an Armstrong number (specifically for 3-digit numbers) by summing the cubes of its digits and comparing it to the original number. It uses a loop to allow multiple checks until the program is terminated.