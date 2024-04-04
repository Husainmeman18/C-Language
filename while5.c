#include <stdio.h>
int main(){
    int a,b,i;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("\n Enter the second number:");
    scanf("%d",&b);
    while (a>=b)
    {
        if (i % 4==0)
        {
           printf("\n %d",i);
        }
        
        i++;
    }
    return 0;
}