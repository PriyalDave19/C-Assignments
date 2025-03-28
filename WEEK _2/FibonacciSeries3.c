#include<stdio.h>
void main(){

    int n ,i , a =-1,b=1 ,c; 
    printf("Enter Total Number of Terms :- \n");
    scanf("%d",&n);
    for(i = 1; i <= n ; i ++){
        c = a+b;            // 0 = 1 =1 = 2
        printf("%d ",c);   // 0 ,1,1,2
        a = b;            // a = 1;= 0 , 1
        b = c;           // b = 0;=1 , = 1
    }
}

// 0 1 1 2 3 5 8 13......n