#include <stdio.h>
 main()
  {
    int a[20], n, i, j, temp;
    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    printf("Enter %d numbers for the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble sort to sort the array in descending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    
}

