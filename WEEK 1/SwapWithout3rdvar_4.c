#include<stdio.h>
void main(){
    int num1 , num2 ;

    printf("Please enter two numbers: \n");
    scanf("%d%d",&num1 , &num2);

    printf(" Before Swapping:\n num1 = %d \t num2 = %d\n",num1 , num2); 

    // num1 = 5       // num2 = 10  

    num1 = num1+num2;   // num1 = 5+10 = 15
    num2 = num1-num2;   // num2 = 15-10 = 5
    num1 = num1-num2;   // num1 = 15-5 = 10

    //   num1 = 10     // num2  = 5

    printf(" After Swapping:\n num1 = %d \t num2 = %d\n",num1 , num2);

    //======================================================================================================

    printf("Again enter two numbers: \n");
    scanf("%d%d",&num1 , &num2);

    printf(" Before Swapping:\n num1 = %d \t num2 = %d\n",num1 , num2); 

    // num1 = 5       // num2 = 10  

    num1 = num1*num2;   // num1 = 5*10 = 50
    num2 = num1/num2;   // num2 = 50/10 = 5
    num1 = num1/num2;   // num1 = 50/5 = 10

    //   num1 = 10     // num2  = 5

    printf(" After Swapping:\n num1 = %d \t num2 = %d\n",num1 , num2);
}