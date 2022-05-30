// Uncomment the commented line If you are using Turbo C and change int main to void main

#include<stdio.h>
// include<conio.h>


int main(){
    int M[50], n, i, sum=0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter marks of sudent %d: ", i+1);
        scanf("%d", &M[i]);
        sum += M[i];
    }
    printf("The sum of the marks is %d\n", sum);
    printf("the averate of the marks is %0.2f\n", (float)sum/n);

    // getch();
}
