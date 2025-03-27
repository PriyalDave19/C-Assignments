#include<stdio.h>
void main(){

    int num,f,l,sum;

    printf("Please enter a 4 digit Number = \n");
    scanf("%d",&num);

    f= num/1000;
    l = num%10;
    sum = f+l;

    printf("Sum of first and last digit of number = %d",sum);
}