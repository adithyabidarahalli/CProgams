#include <stdio.h>

// Function to calculate factorial using recursion
long int factorial(int n) {
    // Base case: factorial of 0 and 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    // Example: Calculate factorial of any number
    
    int  ;
    printf("enter below 10:"); scanf("%d",&number);
    int result = factorial(number);
    printf("Factorial of %d is: %ld\n", number, result);
    return 0;
}

