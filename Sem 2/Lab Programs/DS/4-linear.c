#include <stdio.h>

int main(){
    int a[50], x, i, n;

    printf("Enter no of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to search: ");
    scanf("%d", &x);

    for(i=0; i<n; i++){
        if(a[i]==x)
            break;
    }

    if(i<n)
        printf("Element fount at index %d\n", i);
    else
        printf("Element not found");
}
