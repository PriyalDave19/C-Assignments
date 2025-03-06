#include<stdio.h>
void main(){
    float area , h , b;
    
    printf("Please enter Height and Base of Triangle \n");
    scanf("%f%f",&h , &b);

    area = (h * b) / 2;

    printf("Area Of Triangle = %f",area);
}

// Area Of Triangle = 1/2 * heigth * base
                     