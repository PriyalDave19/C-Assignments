#include<stdio.h>

void main(){
    int n , i ,count = 0;
    int prime( int i , int n ,int count);
      
    printf("Enter Number =\n");
    scanf("%d",&n);

    count=prime(i , n , count);

    if(count == 0)
        printf("%d is Prime Number" , n);
    else
        printf("%d is Not a Prime Number" , n);
}

int prime( int i , int n ,int count){

    for(i = 2 ; i < n ; i++){
        if(n%i == 0)
            count++;
    }
    return count ;
}