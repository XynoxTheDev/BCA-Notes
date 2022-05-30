// Uncomment the commented line If you are using Turbo C

#include<stdio.h>
// include<conio.h>

int main(){
    float pi=3.14, r, circumference, area;
    printf("Enter the radius: ");
    scanf("%f", &r);
    circumference = 2 * pi * r;
    area = pi * r * r;
    printf("Circumference of circle %f\n", circumference);
    printf("Area of circle %f\n", area);

    // getch();
}
