#include <stdio.h>

int main(){
    int array[10], position, i, n, value;
    printf("Enter no of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &array[i]);

    printf("Enter the location where you want to insert: ");
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for(i=n-1; i>=position-1; i--)
        array[i+1] = array[i];

    array[position-1] = value;

    printf("Resulultant array: ");
    for(i=0; i<=n; i++)
        printf("%d  ", array[i]);

}
