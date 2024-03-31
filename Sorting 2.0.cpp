#include<stdio.h>
lines()
{
	int i;
	for (i=0;i<=60;i++)
	printf("-");
	printf("\n");
}
main()
{
int sno, m1, m2, tot ;
float avg;
char name[20];
FILE *p;
p = fopen("stud.dat","r");
printf ("\t\tPANILENI ENGINEERING COLLEGE\n");
printf("\t\t\tKURNOOL\n");
lines();
printf("Student name        name    total       average");
lines();
while(feof(p)==0)
{
	fscanf(p,"%5d%20s%5d%5d",&sno,&name,&m1,&m2);
	tot=m1+m2;
	avg=tot/2;
	printf("%5d\t%20s\t%5f\n",sno,name,tot,avg);
	
}
fclose(p); lines();
}


