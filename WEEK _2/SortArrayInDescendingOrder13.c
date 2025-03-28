#include<stdio.h>
void main(){

    int n ,i ,j,temp = 0;

    printf("Enter total No. of Elements :\n");
    scanf("%d",&n);

    int a[n];
    printf("Enter Elements :- \n");

    for(i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    
    printf("Unsorted Array =\t");

    for(i = 0 ; i < n ; i++){
        printf("%d  ",a[i]);
    }

   for(i = 0 ; i < n ; i++){
    for( j = 0 ; j < n-i-1 ; j++){
        if(a[i]<a[i+1])
        {
           temp = a[i];
           a[i] = a[i+1];
           a[i+1] = temp;
        }
    }
   }
   
   printf("\nSorted Array =\t");

   for(i = 0 ; i < n ; i++){
    printf("%d  ",a[i]);
   }
  
}