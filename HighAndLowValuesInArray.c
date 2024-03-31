#include<stdio.h>
#include<conio.h>
void main()
{
int a[25], i, large, small, n;
printf("Enter a size of an array(max 10) : :"); scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter any %d integer array elements for a[%d]: ",n,i);
scanf("%d",&a[i]);
}
large = a[0];
small = a[0];
for(i=0;i<n;i++)
{
	if (a[i]>large)
	large = a[i];
	if(a[i]<small)
	small=a[i];
}
printf("-----------------------------------\n");
printf("The largest element in this array is %d\n",large);
printf("The smallest element in the given array is %d",small);
}

