#include <stdio.h>
int main(){
    int i,j,k=5;
    for (i=k; i >=1; i--)
    {
        for ( j = 1; j <=i; j++)
        {
           if (j % 2==0)
           {
            printf("0");
           }
           else
           {
            printf("1");
           }
           
        }
        printf("\n");
    }
    
}