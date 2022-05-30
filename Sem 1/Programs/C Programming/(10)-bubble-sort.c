// Uncomment the commented line If you are using Turbo C and change int main to void main

#include <stdio.h>
#include <stdlib.h>
// include<conio.h>

int main()
{
    int a[10], i, j, temp, n;

    printf("Enter the maximum number of elements: \n");
    scanf("%d", &n);

    printf("\nEnter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    // getch();
}
