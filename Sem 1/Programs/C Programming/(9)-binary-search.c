// Uncomment the commented line If you are using Turbo C and change int main to void main

#include<stdio.h>
// include<conio.h>


int main(){
    int arr[50], i, n, x, flag=0, last, mid, first;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("\nEnter array elements(ascending order)\n");
    for(i=0; i<n; ++i)
    scanf("%d", &arr[i]);

    printf("\nEnter the element to search: ");
    scanf("%d", &x);

    first = 0;
    last = n-1;

    while(first <= last)
    {
        mid = (first + last)/2;
        if(x == arr[mid])
        {
            flag=1;
            break;
        }
        else
        {
            if(x>arr[mid])
                first = mid+1;
            else
                last = mid-1;
        }
    }

    if(flag == 1)
        printf("\nElement found at position %d\n", mid+1);
    else
        printf("\nElement not found\n");


    // getch();
}
