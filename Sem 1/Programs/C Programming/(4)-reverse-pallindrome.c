// Uncomment the commented line If you are using Turbo C and change int main to void main

#include<stdio.h>
// include<conio.h>

int main(){
    int n, temp, sum=0, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n>0){
        r = n%10;
        sum = (sum*10)+r;
        n = n/10;
    }
    if(sum==temp){
        printf("The number is pallindrome\n");
    }else{
        printf("The number is not pallindome\n");
    }

    // getch();
}
