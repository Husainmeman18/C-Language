#include <stdio.h>
int main(){
    int i,n,sum=1;
    printf("Enter the value of integar:");
    scanf("%d",&n);
    for ( i=n;i >=1; i--)
    {
        sum*=i;
    }
    printf("Sum =%d",sum);
    return 0;
}