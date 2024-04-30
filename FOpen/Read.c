#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr1,*fptr2;
    char ch;
    fptr1= fopen("C:\\Users\\Husai\\OneDrive\\Desktop\\C language\\Structure\\Struct1.c","r");
    if (fptr1 == NULL)
    {
        printf("Unable to open source file.\n");
        return 1;
    }
     fptr2= fopen("C:\\Users\\Husai\\OneDrive\\Desktop\\C language\\Structure\\Struct.c","w");
    if (fptr2 == NULL)
    {
        printf("Unable to open source file.\n");
        fclose(fptr1);
        return 1;
    }
    while ((ch = fgetc(fptr1)) != EOF) {
        fputc(ch, fptr2);
    }

    // Close the files
    fclose(fptr1);
    fclose(fptr2);

    printf("File copied successfully.\n");

    return 0;
}