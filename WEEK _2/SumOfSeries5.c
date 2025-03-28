#include<stdio.h>
void main(){
    int i, n ;
   float sum = 0;

    printf("Please enter a Number = \n");
    scanf("%d",&n);

    for(i = 1 ; i <=n ;i++)
    {
        sum += (1.0/i);
    }
    printf("Sum of Series = %.2f" , sum);
}