// Uncomment the commented line If you are using Turbo C

#include<stdio.h>
// include<conio.h>


int main(){
    char str[50];
    int i, vovels=0, consonents=0, digits=0, space=0, splchar=0, alphab;
    printf("Enter a srting: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
            vovels++;
        else if((str[i]>='a' && str[i]<='z' ) || (str[i]>='A' && str[i]<='Z'))
            consonents ++;
        else if(str[i]>='0' && str[i]<='9' )
            digits++;
        else if(str[i]==' ')
            space ++;
        else 
            splchar++;
    }
    alphab = vovels+consonents;
    printf("Alphabets = %d\n", alphab);
    printf("Vovel = %d\n", vovels);
    printf("Consonents = %d\n", consonents);
    printf("Digits = %d\n", digits);
    printf("Special Character = %d\n", splchar);
    printf("Spaces = %d\n", space);
}
