#include<stdio.h>
#include<conio.h>
void main(){
  int b,h,area;
  clrscr();
  printf("Enter the value of b:");
  scanf("%d",&b);
  printf("Enter the value of h:");
  scanf("%d",&h);
  area=(b*h)/2;
  printf("Area of Triangle is %d",area);
  getch();
}