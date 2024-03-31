#include<stdio.h>
#include<conio.h>
int main()
{
char s1[20],s2[20],s3[40];
int i,j;
puts("enter for s1:"); gets(s1); //cat\0
puts("enter for s2:"); gets (s2);//rat\0
for(i=0;(s3[i]=s1[i])!='\0';i++);
for(j=0;(s3[j+i]=s2[j])!='\0';j++);
s3[i+j]='\0';

printf("string 1=%s\nstring 2=%s\nconcat str =%s\n",s1,s2,s3);
return 0;
}

