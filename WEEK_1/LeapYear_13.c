#include<stdio.h>
void main(){
    int year;
    
    printf("Please enter any Year : \n");
    scanf("%d",&year);

    if((year%400) == 0 || (year%4) == 0 && (year%100) != 0 )
        printf("Year = %d is Leap Year\n",year);
    else
        printf("Year = %d is not a Leap Year\n",year);
}