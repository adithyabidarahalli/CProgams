#include<stdio.h>

int factorial(int n) 
{
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() 
{
    int num; 
    again:
    printf("enter a value :"); scanf("%d",&num);
    int result = factorial(num);
    printf("The factorial of %d is %d\n", num, result);
    goto again;
    
    return 0;
}


