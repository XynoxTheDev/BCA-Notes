// Uncomment the commented line If you are using Turbo C and change int main to void main

#include<stdio.h>
#include<math.h>
// include<conio.h>

int main(){
    float a, b, c;
    float root1, root2, img, dis;
    printf("Please enter value of a, b, c of Quadratic Equation: ");
    scanf("%f %f %f", &a, &b, &c);
    dis = (b * b) - (4 * a * c);
    if(dis > 0){
        root1 = (-b + sqrt(dis)) / (2*a);
        root2 = (-b - sqrt(dis)) / (2*a);
        printf("Two distinct real root exists: root1=%.2f and root2=%.2f", root1, root2);
    }
    else if(dis == 0){
        root1 = root2 = -b / (2*a);
        printf("Two equal real root exists: root1=%.2f and root2=%.2f", root1, root2);
    }
    else if(dis < 0){
        root1 = root2 = -b / (2*a);
        img = sqrt(-dis) / (2 * a);
        printf("Two distinct complex root exists: root1=%.2f+%.2fi and root2=%.2f-%.2fi", root1, img, root2, img);
    }

    // getch();
}
