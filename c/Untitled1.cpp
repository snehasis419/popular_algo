#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);
    int c=1;
    for(i=1;i<=n;i++)
    {
        c=c+1;
    }
    printf("sum=%d",c);
    getch();
    return 0;
}
