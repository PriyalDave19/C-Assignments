#include<stdio.h>
void main(){
    int num1 , num2  , temp;

    printf("Please enter two numbers: \n");
    scanf("%d%d",&num1 , &num2);

    printf(" Before Swapping:\n num1 = %d \t num2 = %d\n",num1 , num2); 

    // num1 = 5       // num2 = 10  // temp = 0

    temp = num1;    // temp = 5 ;
    num1 = num2;    // num1 = 10 ;
    num2 = temp;    // num2 = 5 ;

    printf(" After Swapping:\n num1 = %d \t num2 = %d\n",num1 , num2);
}