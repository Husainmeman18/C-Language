// Online C compiler to run C program online
#include <stdio.h>

struct Marksheet
{
    int Rollno;
    char Name[50];
    int Chem;
    int maths;
    int Phy;
};
int main()
{
    int i, sum = 0;
    struct Marksheet s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of Student %d:", i + 1);
        printf("\nEnter the Student Rollno:");
        scanf("%d", &s[i].Rollno);
        printf("Enter the Student Name:");
        scanf("%s", &s[i].Name);
        printf("Enter the Student Chemistry marks:");
        scanf("%d", &s[i].Chem);
        printf("Enter the Student Maths marks:");
        scanf("%d", &s[i].maths);
        printf("Enter the Student Physics marks:");
        scanf("%d", &s[i].Phy);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent Rollno:%d", s[i].Rollno);
        printf("\nStudent Name:%s", s[i].Name);
        printf("\nStudent Chemistry =>%d", s[i].Chem);
        printf("\nStudent Maths =>%d", s[i].maths);
        printf("\nStudent Physics =>%d", s[i].Phy);
        sum = s[i].Chem + s[i].maths + s[i].Phy;
        printf("\nTotal : %d/300\n", sum);
        float percentage = (s[i].Chem + s[i].maths + s[i].Phy) / 300.0 * 100;
        printf("\nPercentage : %.2f\n", percentage);
    }

    printf("\n");

    return 0;
}