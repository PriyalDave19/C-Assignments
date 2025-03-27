#include<stdio.h>
void main(){
    int fact = 1,num ,i;

    printf("Please enter a Number = \n");
    scanf("%d",&num);

    for(i =num ; i>=1 ; i--){
        fact *= i;
    }
    printf("Factorial of %d = %d",num,fact);
}

// 3! = 3*2*1