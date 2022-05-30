// Uncomment the commented line If you are using Turbo C

#include<stdio.h>
// include<conio.h>

int main(){
  int a[10][10], b[10][10], c[10][10], i, j, k, r1, r2, c1, c2;
  printf("\nEnter no of ros and columns of Martix A: ");
  scanf("%d %d", &r1, &c1);
  printf("\nEnter no of ros and columns of Martix B: ");
  scanf("%d %d", &r2, &c2);

  if(c1 != r2)
    printf("\n\nMultiplicaton is not possible\n");
  else
  {
    printf("\nEnter elements of Martix A: \n");
    for(i=0; i<r1; i++)
      for(j=0; j<c1; j++)
        scanf("%d", &a[i][j]);
    
    printf("\nEnter elements of Martix B: \n");
    for(i=0; i<r2; i++)
      for(j=0; j<c2; j++)
        scanf("%d", &b[i][j]);

/*     printf("\n\nElements of Martix A:\n"); */
/*     for(i=0; i<r1; i++){ */
/*       for(j=0; j<c1; j++){ */
/*           printf("%d  ", a[i][j]); */
/*       } */
/*       printf("\n"); */
/*     } */
/*     printf("\n\nElements of Martix B:\n"); */
/*     for(i=0; i<r2; i++){ */
/*       for(j=0; j<c2; j++){ */
/*           printf("%d  ", b[i][j]); */
/*       } */
/*       printf("\n"); */
/*     } */

    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++){
            c[i][j]=0;
            for(k=0; j<r2; k++)
                c[i][j] = c[i][j]+a[i][k]*b[k][j];
        }
    printf("\n\nMultplicaiton of Martix A and B:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++)
            printf("%d  ", c[i][j]);
        printf("\n");
    }
    }

}
