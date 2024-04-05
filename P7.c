#include <stdio.h>
int main(){
    int i,j,k=5;
    char ch='a';
    for (i=ch; i <='e'; i++)
    {
        for ( j = i; j >=ch; j--)
        {
          printf("%c",j);
        }
        printf("\n");
    }
    
}