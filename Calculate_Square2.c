#include<stdio.h>
void main(){
    
    int n,i,sqr;
    
    printf("Please enter any number:\n");
    scanf("%d",&n);

    sqr = n*n;

    printf("Square of %d = %d\n",n,sqr);

//===============================================================================

    printf("Again enter any number:\n");
    scanf("%d",&n);
    
    for(i = 1 ; i <= n ;i++){
        sqr = i*i ;
        printf("Square of %d = %d\n",i,sqr);
    }
   


}