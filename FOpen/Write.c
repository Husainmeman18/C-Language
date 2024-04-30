#include <stdio.h>
int main()
{
    FILE *ptr;
    int i;
    ptr = fopen("C:\\Users\\Husai\\OneDrive\\Desktop\\C language\\FOpen\\div.c", "w");
    if (ptr == NULL)
    {
        printf("Unable to create file.\n");
        return 1;
    }
    for (i = 1; i <= 50; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            fprintf(ptr, "%d\n", i);
        }
    }
    fclose(ptr);
    printf("Numbers written to file successfully.\n");

    return 0;
}