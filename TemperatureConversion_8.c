#include<stdio.h>
void main(){

    int c;
    float f ;

    printf("Please enter a Celcius : \n");
    scanf("%d",&c);
    
    f = (9.0 / 5.0 )*c+32;

    printf("%d C = %f F",c,f);

    // f = 9/5 * c+32;

}