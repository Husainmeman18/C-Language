#include <stdio.h>
int main(){
    int no,r,sum=0,last;
    printf("Enter the value:");
    scanf("%d",&no);
    last=no%10;
    while (no>0)
    {
        r = no%10;
        no = no/10;
    }
        sum=r+last;
        printf("\n The sum of the first and the last digit:%d",sum);
}