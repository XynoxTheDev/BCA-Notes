#include <stdio.h>

int main(){
    int i, j, size, a[10], min, temp;;

    printf("Enter the size of an array: ");
    scanf("%d", &size);

    printf("Enter the elements into the array: ");
    for(i=0; i<size; i++){
        scanf("%d", &a[i]);
    }

    printf("Array elements before sorting: ");
    for(i=0; i<size; i++){
        printf("%d  ", a[i]);
    }

    for(i=0; i<size; i++){
        min = i;
        for(j=i+1; j<size; j++){
            if(a[j] < a[min])
                min=j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("\nAfter sorting: ");
    for(i=0; i<size; i++){
        printf("%d  ", a[i]);
    }
}
