#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);
    i=1;
    int m;
    while(i<=10)
    {
        m=n*i;
        printf("%d\n",m);
        m=0;
        i=i+1;
    }
    getch();
    return 0;
}
