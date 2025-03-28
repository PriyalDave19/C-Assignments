#include<stdio.h>
void main(){

    int n ,i ;

    printf("Enter total No. of Elements :\n");
    scanf("%d",&n);

    int a[n];

    printf("Enter Elements :- \n");

    for(i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Original Array =\t");

    for(i = 0 ; i < n ; i++){
        printf("%d  ",a[i]);
    }
    printf("\nReverse Array = \t");
    
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d  ",a[i]);
    }
    
    
     
}