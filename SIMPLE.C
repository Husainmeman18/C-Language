#include<stdio.h>
#include<conio.h>
void main(){
int p,r,t,si;
clrscr();
printf("Enter the value of p:");
scanf("%d",&p);
printf("Enter the value of r:");
scanf("%d",&r);
printf("Enter the value of t:");
scanf("%d",&t);
si=(p*r*t)/100;
printf("simple interest is %d",si);
getch();
}