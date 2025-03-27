#include<stdio.h>
void main(){

    int num ,rem,arm=0 ,temp;

    printf("enter 3 digit number = \n");
    scanf("%d",&num);
    
    temp = num;

    while(num != 0){
        rem = num%10;
        num = num/10;
        arm += rem*rem*rem;
    }

    if(arm == temp)
        printf("Armstrong Number \n");
    else
        printf("Not a Armstrong Number \n");

}

// 1 5 3 ->  (1*1*1) + (5*5*5) + (3*3*3) = 1+125+27 = 125=28 = 153
                                                       