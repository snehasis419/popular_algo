#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,b=1,c=0,i;
    printf("%d",a);
    printf("%d",b);
    for(i=1;i<=8;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    getch();
    return 0;
}
