#include <stdio.h>
int main(){
    int i,n;
    printf("Enter the value:");
    scanf("%d",&n);
    for ( i = 1; i <=10; i++)
    {
        printf("\n %d X %d = %d",n,i,i*n);
    }
    return 0;
}