#include <stdio.h>

int main(){
    int n, i, j, a[20], temp;

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter the elements to the array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Before sorting: ");
    for(i=0; i<n; i++)
        printf("%d  ", a[i]);

    for(i=1; i<n; i++){
        temp = a[i];
        for(j=i; j>0 && temp<a[j-1]; j--){
            a[j] = a[j-1];
        }
        a[j] = temp;
    }

    printf("\nAfter sorting: ");
    for(i=0; i<n; i++)
        printf("%d  ", a[i]);
}
