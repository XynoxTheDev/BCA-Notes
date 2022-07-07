#include <stdio.h>
#include <stdlib.h>

void length(){
    char s[100];
    int i;
    printf("Enter the string: ");
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++){};
    printf("The length of the string = %d\n", i);;
}

void conc(){
    char str1[25], str2[25];
    int i=0, j=0;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    while(str1[i]!='\0') i++;

    while(str2[j]!='\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
    printf("Concatinated string is: %s\n", str1);
}

void reverse(){
    char str[25], temp;
    int i=0, j=0;
    printf("Enter the string: ");
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++);
    i--;

    while(j<i){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
        j++;
    }
    printf("Reversed string is: %s\n", str);
}

int main(){
    int choice;
    while(1){
        printf("\n1 -> length of string\n");
        printf("2 -> Concatination of string\n");
        printf("3 -> Reverse of string\n");
        printf("4 -> Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                length();
                break;

            case 2:
                conc();
                break;

            case 3:
                reverse();
                break;

            case 4:
                exit(0);

            default:
                printf("\nInvalid choice!!!\n");
        }
    }
}
