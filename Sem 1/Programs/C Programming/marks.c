// Uncomment the commented line If you are using Turbo C


#include<stdio.h>
#include<stdlib.h>
// include<conio.h>


int main(){
    int marks[5], sum=0, avg;
    
    printf("Enter marks of 5 subjects out of 100: ");

    for(int i=0; i<5; i++){
        scanf("%d", &marks[i]);
    }

    for(int i=0; i<5; i++){
        sum += marks[i];
    }
    
    avg = sum / 5;

    printf("Avrage of the marks: %d\n", avg);

    return 0;

    // getch();

}


