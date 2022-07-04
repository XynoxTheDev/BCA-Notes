#include <stdio.h>

int gcd(int, int);

int main(){
    int a, b, c, res;
    printf("Enter the nuumbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b)
        res = gcd(a, b);
    else
        res = gcd(b, a);

    if(c>res)
        res = gcd(c, res);
    else
        res = gcd(res, c);

    printf("GCD of 3 numbers is %d\n", res);
}

int gcd(int a, int b){
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}
