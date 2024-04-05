#include <stdio.h>
int main(){
    int no,d=0;
    printf("Enter the value:");
    scanf("%d",&no);
    while (no!=0)
    {
        no=no/10;
        d++;
    }
    printf("\n Total number of digits:%d",d);
    return 0;
}