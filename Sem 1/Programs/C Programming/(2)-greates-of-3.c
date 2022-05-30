// Uncomment the commented line If you are using Turbo C and change int main to void main

#include<stdio.h>
// include<conio.h>

int main(){
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1>=n2 && n1 >= n3){
        printf("%d is greatest\n", n1);
    }
    else if(n2>=n1 && n2 >= n3){
        printf("%d is greatest\n", n2);
    }
    else{
        printf("%d is greatest\n", n3);
    }

    // getch();
}
