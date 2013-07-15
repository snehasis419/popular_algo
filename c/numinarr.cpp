#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],i,n,ctr=0;
    printf("enter the array:");
    for(i=0;i<=50;i++)
    scanf("%d",a[i]);
    printf("enter the number you want to find:");
    scanf("%d",&n);
    for(i=0;i<50;i++)
    {
        if(a[i]==n)
        ctr=ctr+1;
    }
    if(ctr>0)
    {
        printf("number found");
        printf("number is %D times", ctr);
    }
    getch();
    return 0;

}
