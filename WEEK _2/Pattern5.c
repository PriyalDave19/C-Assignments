#include<stdio.h>
void main()
{
    int i ,j ,k, n;
    
    printf("Please Total Number of Lines = \n");
    scanf("%d",&n);

    for(i = 1 ; i <= 5 ; i++){
        for(k = n-i ;k > 0 ; k--){
            printf(" ");
        }
        for(j = 1 ; j <= i ;j++ ){
            printf("* ");
        }
        printf("\n");
    }
    
    
    
    

}