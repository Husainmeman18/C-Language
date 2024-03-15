#include<stdio.h>
#include<conio.h>
void main(){
  float pi=3.14,r,peri;
  clrscr();
  printf("Enter the value of r:");
  scanf("%f",&r);
  peri=2*pi*r;
  printf("Perimeter of circle is %.2f",peri);
  getch();
}