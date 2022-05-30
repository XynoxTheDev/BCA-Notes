// Uncomment the commented line If you are using Turbo C and change int main to void main

#include<stdio.h>
// include<conio.h>

int main(){
    int i, len=0; 
    char s[100];
    printf("Enter a string: ");
    gets(s);
    for(i=0; s[i]!='\0'; i++){
        len++;
    }
    printf("Length of string %s is %d\n", s, len);
}


