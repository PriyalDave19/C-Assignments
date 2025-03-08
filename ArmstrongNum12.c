#include<stdio.h>
void main(){
    int n = 153 ,rem , res = 0 ,temp = n;

    printf("Number = %d\n",n);

    while(n != 0){
        rem = n % 10; // 3
        n = n / 10; //15
        res += (rem*rem*rem);
    }
    if(temp == res)
        printf("Armstrong Number\n");
    else
        printf("Not a Armstrong Number\n");


}

// 1 5 3 ->  (1*1*1) + (5*5*5) + (3*3*3) = 1+125+27 = 125=28 = 153
                                                       