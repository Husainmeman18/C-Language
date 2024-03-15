#include<stdio.h>
#include<conio.h>
void main(){
   int l,b,area;
   clrscr();
   printf("enter the value of l:");
   scanf("%d",&l);
   printf("enter the value of b:");
   scanf("%d",&b);
   area=(l*b);
   printf("Area of rectangle is %d",area);
   getch();
}