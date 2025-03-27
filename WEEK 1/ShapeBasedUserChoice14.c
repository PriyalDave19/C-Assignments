#include<stdio.h>
void main(){

    char ch ;
    float area ,r,pie=3.14 , l ,b , side;

    printf(" Enter S. for Square \n Enter C. for Circle \n Enter R. for Rectangle \n Enter your Choice :\n");
    scanf("%c",&ch);

    switch(ch){
        case 'S':
    
            printf("Square :\n");
            printf("Please enter Side = \n");
            scanf("%f",&side);
            area = side*side;
            printf("Area of Square = %.2f",area);

            break;

        case 'C':
            
            printf("Circle");
            printf("Please enter Radius = \n");
            scanf("%f",&r);
            area = pie*r*r;
            printf("Area of Circle = %.2f",area);

            break;

        case 'R':

            printf("Rectangle");
            printf("Please enter Length and Breadth = \n");
            scanf("%f%f",&l,&b);
            area = l*b;
            printf("Area of Rectangle = %.2f",area);

            break;

        default:
            printf("enter a valid choice\n");
    }
}