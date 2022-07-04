#include <stdio.h>

int main(){
    int i, j, rows, cols, a[10][10], total=0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &i, &j);

    printf("\nEnter the matrix element:\n");
    for(rows=0; rows<i; rows++){
        for(cols=0; cols<i; cols++){
            scanf("%d", &a[rows][cols]);
        }
    }

    for(rows=0; rows<i; rows++){
        for(cols=0; cols<i; cols++){
            if(a[rows][cols]==0){
                total++;
            }
        }
    }

    if(total>(rows*cols)/2){
        printf("\nThe matrix that you entered is a sparse matrix.\n");
    }
    else{
        printf("\nThe matrix that you entered is not sparse matrix.\n");
    }
}

