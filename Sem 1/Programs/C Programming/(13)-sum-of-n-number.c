// Uncomment the commented line If you are using Turbo C and change int main to void main

#include<stdio.h>
// include<conio.h>

int main(){
    int i, n, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum += i;
    }
    printf("Sum = %d\n", sum);
}
