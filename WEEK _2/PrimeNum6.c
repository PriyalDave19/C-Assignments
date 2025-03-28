#include<stdio.h>
void main(){
    int i,j, n ,count = 0;
    
    for(j = 1 ; j <= 1000 ; j++){
        count = 0;
        for(i = 2 ; i < j;i++)
        {
            if(j%i == 0)
                 count ++;
         }
        if(count == 0)
            printf("%d ",j);
    }
}