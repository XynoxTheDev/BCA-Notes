// Uncomment the commented line If you are using Turbo C and change int main to void main

#include<stdio.h>
// include<conio.h>

int main(){
    int c=0, n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(n%i==0)c++;
    }
    if(c==2){
        printf("The number is prime\n");
    }
    else{
        printf("The number is not prime\n");
    }

    // getch();
}
