#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a[10];
    int i;
    int j;
    int big=0;
    for(i=1;i<=n;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);
    }
    for(j=1;j<=n;j++)
    {
        if(big<a[j])
        big=a[j];
    }
    printf("%d", big);
    getch();
    return 0;
}
