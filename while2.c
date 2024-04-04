#include <stdio.h>
int main(){
    int i;
    printf("Enter the value:");
    scanf("%d",&i);
    while (i >=1)
    {
        printf("\n %d",i);
        i--;
    }
    return 0;
}