// Uncomment the commented line If you are using Turbo C

#include<stdio.h>
// include<conio.h>

int main(){
    int s1, s2, s3, s4, s5, t, p;
    printf("Enter marks of the student out of 100\n");
    printf("Enter marks of English: ");
    scanf("%d", &s1);
    printf("Enter marks of maths: ");
    scanf("%d", &s2);
    printf("Enter marks of hindi: ");
    scanf("%d", &s3);
    printf("Enter marks of C: ");
    scanf("%d", &s4);
    printf("Enter marks of dbms: ");
    scanf("%d", &s5);

    t = s1+s2+s3+s4+s5;
    p = (t/500)*100;

    printf("Total marks = %d\n", t);
    printf("Percentage = %d\n", p);

    if(p>90){
        printf("Your grade is A+\n");
    }
    else if(p>90){
        printf("Your grade is A+\n");
    }
    else if(p>70){
        printf("Your grade is b+\n");
    }
    else if(p>50){
        printf("Your grade is c+\n");
    }
    else if(p>30){
        printf("Your grade is d+\n");
    }
    else{
        printf("Your failed\n");
    }
    

    // getch();
}
