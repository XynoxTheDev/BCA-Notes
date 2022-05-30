// Uncomment the commented line If you are using Turbo C and change int main to void main

#include<stdio.h>
// include<conio.h>

int main(){
    int t1=0, t2=1, n, temp, nextterm;
    printf("Enter the no of terms for febonacci series: ");
    scanf("%d", &n);
    nextterm = t1 +t2;
    printf("Febonacci series %d\t%d\t", t1, t2);
    for(int i=3; i<=n; i++){
        printf("%d\t", nextterm);
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }
    printf("\n");
    // getch();
}
