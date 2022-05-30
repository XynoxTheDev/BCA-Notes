// Uncomment the commented line If you are using Turbo C and change int main to void main

#include<stdio.h>
// include<conio.h>

int main(){
    int n1, n2, min, i, gcd;
    printf("Enter two number to find GCD: ");
    scanf("%d %d", &n1, &n2);
    min = (n1<n2)?n1:n2;
    for(i=1; i<=min; i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    printf("GCD of %d and %d is %d", n1, n2, gcd);

    // getch();
}
