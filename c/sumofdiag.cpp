#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],i,j,s1=0,s2=0;
    printf("enter the array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            s1=s1+a[i][j];
        if(j==2-i)
        s2=s2+a[i][j];
    }
}
        printf("sum of main diagnol %d", s1);
        printf("sum of other diagnol %d", s2);
        getch();
    }
    
