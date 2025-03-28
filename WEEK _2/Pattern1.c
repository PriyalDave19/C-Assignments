#include<stdio.h>
void main(){
    int i ,j, n;

    printf("Please Total Number of Lines = \n");
    scanf("%d",&n);

    for(i = 0 ; i < n ;i++){
            for(j = 0 ; j <= i+i ;j++){
                printf("*");
            }
        printf("\n");
    }
}


