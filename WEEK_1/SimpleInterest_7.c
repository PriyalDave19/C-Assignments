#include<stdio.h>
void main(){
    int p ;
    float r, t ,sI;

    printf("Please enter a Principle, Rate And Time :\n");
    scanf("%d%f%f",&p,&r,&t);

    sI = (p * r * t)/100;
    
    printf("Simple Interest = %f",sI);
}