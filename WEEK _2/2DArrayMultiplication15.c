#include<stdio.h>
void main(){

    int r,c ,i ,k,j;

    printf("Enter total No. of Elements :\n");
    scanf("%d%d",&r,&c);

    int a[r][c] , b[r][c] , result[r][c];
    
    printf("Enter Elements in A Array:- \n");

    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
        scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter Elements in B Array:- \n");

    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
        scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("\nDisplay Elements in A Array=\n");

    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDisplay  Elements in B Array=\n");

    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
        printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication of A and B Array=\n");

    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            result[i][j] = 0;
            for(k = 0 ; k < r ; k++){
                result[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}