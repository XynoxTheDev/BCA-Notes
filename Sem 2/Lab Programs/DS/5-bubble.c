#include <stdio.h>

int main() {
    int a[50], n, i, j, swap;
   
    printf("Enter no of elements in the array: ");
    scanf("%d", &n);
   
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
   
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    printf("Sorted Array: ");
   
    for (i = 0; i < n; i++) {
      printf("%d  ", a[i]);
    }
}
