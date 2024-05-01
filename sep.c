#include <stdio.h>
int main(){
    FILE *even,*odd;
    int num;
    even=fopen("C:\\Users\\Husai\\OneDrive\\Desktop\\C language\\FOpen\\even.c","w");
    odd=fopen("C:\\Users\\Husai\\OneDrive\\Desktop\\C language\\FOpen\\odd.c","w");
    if (even == NULL || odd == NULL)
    {
        printf("Error: Unable to open files.\n");
        return 1;
    }
    for (num = 50;num <= 70;num++)
    {
        if (num % 2==0)
        {
              fprintf(even, "%d\n", num);
        }
        else{
            fprintf(odd, "%d\n", num);
        }
    }
    printf("Even and odd numbers have been written to separate files successfully.\n");
    fclose(even);
    fclose(odd);
    return 0;
}