// Uncomment the commented line If you are using Turbo C and change int main to void main

#include<stdio.h>
// include<conio.h>

int main(){
    int fact=1, i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0){
        printf("No negative number\n");
    }
    else{
        for(i=1; i<=n; i++){
            fact = fact*i;
        }
        printf("Factorial of %d is %d\n", n, fact);
    }
    // getch();
}
