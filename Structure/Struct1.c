#include <stdio.h>

struct Student
{
    int id;
    char Name[50];
    int age;
    char course[50];
    char city[50];
    int stand;
    char school[50];
};

int main()
{
    struct Student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the ID:");
        scanf("%d", &s[i].id);
        
        printf("\nEnter the Name:");
        scanf(" %[^\n]", s[i].Name);
        
        printf("\nEnter the Age:");
        scanf("%d", &s[i].age);
        
        printf("\nEnter the Course:");
        scanf(" %[^\n]", s[i].course);
        
        printf("\nEnter the City:");
        scanf(" %[^\n]", s[i].city);
        
        printf("\nEnter the Standard:");
        scanf("%d", &s[i].stand);
        
        printf("\nEnter the School:");
        scanf(" %[^\n]", s[i].school);
    }
    
    for (int i = 0; i < 3; i++)
    {
       printf("\nGiven Student records");
       printf("\nStudent Id:%d",s[i].id);
       printf("\nStudent Name:%s",s[i].Name);
       printf("\nStudent Age:%d",s[i].age);
       printf("\nStudent Course:%s",s[i].course);
       printf("\nStudent City:%s",s[i].city);
       printf("\nStudent Standard:%d",s[i].stand);
       printf("\nStudent School:%s",s[i].school);
    }
    
    return 0;
}
