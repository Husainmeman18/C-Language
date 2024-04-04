#include <stdio.h>
void main(){
    int i;
    printf("Enter the value:");
    scanf("%d",&i);
    while (i >=1)
    {
        if (i % 2 !=0)
        {
          printf("\n %d",i);
        }
        i--;
    }   
}