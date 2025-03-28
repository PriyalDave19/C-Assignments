#include<stdio.h>
void main(){

    int n ,i ,j,max;

    printf("Enter total No. of Elements :\n");
    scanf("%d",&n);

    int a[n];
    
    printf("Enter Elements :- \n");

    for(i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }

    max = a[0];

    printf("Array Elements =\t");
    for(i = 0 ; i < n ; i++){
        printf("%d ",a[i]);
        if(max<a[i])
            max = a[i];
    }

    printf("\nMaximum Element in an array = %d",max);
}