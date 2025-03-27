#include<stdio.h>
void main(){
    const float pie = 3.14;
    float area , r ;

    printf("Please enter a radius of Circle : \n");
    scanf("%f",&r);

    area  = pie * r * r;

    printf("Area of Circle = %f",area);

}