#include <stdio.h>

struct Employee
{
    int id;
    char Name[50];
    int age;
    char role[50];
    char city[50];
    int experience;
    char company_name[50];
};

int main()
{
    int num;
    printf("Enter Numbers of Employes:");
    scanf("%d",&num);
    struct Employee s[3];
    for (int i = 0; i < num; i++)
    {
        printf("\nEnter the ID:");
        scanf("%d", &s[i].id);
        
        printf("\nEnter the Name:");
        scanf(" %[^\n]", s[i].Name);
        
        printf("\nEnter the Age:");
        scanf("%d", &s[i].age);
        
        printf("\nEnter the Role:");
        scanf(" %[^\n]", s[i].role);
        
        printf("\nEnter the City:");
        scanf(" %[^\n]", s[i].city);
        
        printf("\nEnter the Experience:");
        scanf("%d", &s[i].experience);
        
        printf("\nEnter the company_name:");
        scanf(" %[^\n]", s[i].company_name);
    }
    
    for (int i = 0; i < num; i++)
    {
       printf("\nGiven Employee records");
       printf("\nEmployee Id:%d",s[i].id);
       printf("\nEmployee Name:%s",s[i].Name);
       printf("\nEmployee Age:%d",s[i].age);
       printf("\nEmployee role:%s",s[i].role);
       printf("\nEmployee City:%s",s[i].city);
       printf("\nEmployee Experience:%d",s[i].experience);
       printf("\nEmployee company Name:%s",s[i].company_name);
    }
    
    return 0;
}
