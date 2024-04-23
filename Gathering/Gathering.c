#include <stdio.h>
int add(int a, int b, int ch, int c);
int main()
{
    int a, b, c, ch;
    add(a, b, ch, c);
    for(;;){
     printf("\nPress 1 for +:");
    printf("\nPress 2 for -:");
    printf("\nPress 3 for *:");
    printf("\nPress 4 for /:");
    printf("\nPress 5 for %:");
    printf("\nPress 0 for the exit:");
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    if(ch == 0){
         printf("Program exited");
        break;
    }
}
    return 0;
}
int add(int a, int b, int ch, int c)
{
    printf("Press 1 for +:");
    printf("\nPress 2 for -:");
    printf("\nPress 3 for *:");
    printf("\nPress 4 for /:");
    printf("\nPress 5 for %:");
    printf("\nPress 0 for the exit:");
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter the First number:");
        scanf("%d", &a);
        printf("Enter the Second number:");
        scanf("%d", &b);
        c = a + b;
        printf("Addition is:%d", c);
    case 2:
        printf("Enter the First number:");
        scanf("%d", &a);
        printf("Enter the Second number:");
        scanf("%d", &b);
        c = a - b;
        printf("Subtraction is:%d", c);
        break;

    case 3:
        printf("Enter the First number:");
        scanf("%d", &a);
        printf("Enter the Second number:");
        scanf("%d", &b);
        c = a * b;
        printf("Multiply is:%d", c);
        break;

    case 4:
        printf("Enter the First number:");
        scanf("%d", &a);
        printf("Enter the Second number:");
        scanf("%d", &b);
        c = a / b;
        printf("Division is:%d", c);
        break;
    case 5:
        printf("Enter the First number:");
        scanf("%d", &a);
        printf("Enter the Second number:");
        scanf("%d", &b);
        c = a % b;
        printf("Mod is:%d", c);
        break;
    case 0:
        printf("Program exited");
        break;
    default:
        printf("Invalid choice");
        break;
    }
}
