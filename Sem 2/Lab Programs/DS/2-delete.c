#include <stdio.h>

int main(){
    int array[10], position, i, n;
    printf("Enter no of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &array[i]);

    printf("Enter the location where you want to delete: ");
    scanf("%d", &position);

    if(position>=n+1)
        printf("Deletition not possible\n");
    else{
        for(i=position-1; i<n-1; i++)
            array[i] = array[i+1];

        printf("Resultant array is: ");
        for(i=0; i<n-1; i++)
            printf("%d  ", array[i]);
    }
}
