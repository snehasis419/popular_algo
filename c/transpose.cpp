#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],i,j,b[3][3];
    printf("enter the array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("martix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d",a[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        b[i][j]=a[j][i];
    }
    printf("transpose of martrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d",b[i][j]);
        printf("\n");
    }
        getch();
    }
    
