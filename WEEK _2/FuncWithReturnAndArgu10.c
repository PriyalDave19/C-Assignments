#include<stdio.h>

int fact(int n ,int i){

    int fact = 1;
    for(i = n ; i >= 1 ;i--){
        fact *= i;
    }
    return fact;
}

void main(){

    int n , i ;
    
    printf("Enter Number =\n");
    scanf("%d",&n);

    printf("Factorial of %d = %d\n",n ,fact(n , i));
   
}