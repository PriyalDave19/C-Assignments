#include<stdio.h>
void main(){

    int bs,da;
    float ta,pf ,gs ,ns;

    printf("Please enter Basic Salary:\n");
    scanf("%d", &bs);

    ta = (10/100.0) * bs; 

    pf = (7.8/100.0) * bs;

    da = 500;

    gs = bs + da + ta ;
    ns = gs - pf;

    printf("Gross Salary = %.2f \n Net Salary = %.2f \n",gs,ns);



}