#include <stdio.h>
int main(){
    int i,j,k=1;
    for (i=1; i <=5; i++)
    {
        for ( j = 0; j <i; j++)
        {
         printf("%d \t",k++);
        }
        printf("\n");
    }
    
}