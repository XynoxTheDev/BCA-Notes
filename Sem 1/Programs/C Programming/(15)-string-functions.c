// Uncomment the commented line If you are using Turbo C

#include<stdio.h>
#include<string.h>
// include<conio.h>

int main(){
    int l;
    char s1[100], s2[100];
    printf(" **** Performing string length **** \n");
    printf("Enter only one string: ");
    scanf("%s", s1);
    l = strlen(s1);
    printf("Length of string %s is %d\n\n", s1, l);
    printf(" **** Performing string concatination **** \n");
    printf("Enter two string: ");
    scanf("%s %s", s1, s2);
    printf("Concatination of the strings: %s\n\n", strcat(s1, s2));
    printf(" **** Performing string comparison **** \n");
    printf("Enter two string: ");
    scanf("%s %s", s1, s2);
    if(strcmp(s1, s2)==0){
        printf("Both string are equal\n\n");
    }
    else{
        printf("Both string are not equal\n\n");
    }
    printf(" **** Performing string copy **** \n");
    printf("Enter two string: ");
    scanf("%s %s", s1, s2);
    printf("value of s1=%s and s2=%s before strcpy\n", s1, s2);
    strcpy(s1, s2);
    printf("value of s1=%s and s2=%s after strcpy\n", s1, s2);

    //getch();
}
