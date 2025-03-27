#include<stdio.h>
void main(){

    int num , rem ,rev=0 , temp; 
    
    printf("enter 3 digit number = \n");
    scanf("%d",&num);
    
    temp = num;

    while(num != 0){
        rem = num%10;
        num = num/10;
        rev = (rev * 10) + rem;
    }
    /*
     rev = (rev*10)+rem; ======>>>> 0*10+1 =   1 ,,,,,,  1*10+2 = 10+2 = 12 ,,,,,,, 12*10+1 === 120+1 = 121
    */
    if(temp == rev)
        printf("Pallindrome Number\n");
    else
        printf("Not a Pallindrome Number");
}