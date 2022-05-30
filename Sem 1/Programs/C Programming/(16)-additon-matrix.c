// Uncomment the commented line If you are using Turbo C

#include<stdio.h>
// include<conio.h>


void add_mat(int[10][10], int[10][10], int, int);
void input_first_mat(int[10][10], int, int);
void input_second_mat(int[10][10], int, int);
int i, j;

int main(){
    int m, n, first[10][10], second[10][10];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the element of first matrix\n");
    input_first_mat(first, m, n);
    printf("Enter the elements of second matrix\n");
    input_second_mat(second, m, n);
    add_mat(first, second, m, n);

    // getch();
}

void input_first_mat(int first[10][10], int m, int n){
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &first[i][j]);
}

void input_second_mat(int second[10][10], int m, int n){
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &second[i][j]);
}

void add_mat(int first[10][10], int second[10][10], int m, int n){
    printf("\nSum of two matrix: \n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++){
            printf("%d  ", first[i][j]+second[i][j]);
            if(j==n-1){
                printf("\n\n");
            }
        }
}

