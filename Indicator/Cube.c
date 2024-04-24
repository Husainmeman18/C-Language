#include <stdio.h>
void fun(int (*a)[100],int row,int col);
int main() {
 int row,col;
    printf("Enter the Row size:");
    scanf("%d",&row);
    printf("Enter the Col size:");
    scanf("%d",&col);
    int a[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
         printf("\nEnter the Elements a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    fun(a,row,col);
    return 0;
}
void fun(int (*a)[100],int row,int col){
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        int cube =  a[i][j] * a[i][j] ;
        printf("%d ",cube);
        }
        printf("\n");
    }
    
}