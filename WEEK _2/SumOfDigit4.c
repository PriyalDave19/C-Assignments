#include<stdio.h>
void main(){
    int n ,i, sum = 0,rem ;

    printf("Enter a digit : -\n");
    scanf("%d",&n);

    while(n != 0){
        rem = n%10;
        n = n/10;
        sum +=rem; 
    }
    printf("Sum of digit = %d",sum);
}