#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],i,max=0,sum=0;
    printf("enter the array:");
    for(i=0;i<50;i++)
    {
    scanf("%d",&a[i]);
}

    for(i=0;i<50;i++)
    {
        sum=sum+a[i];
        if(max<a[i])
        max=a[i];
    }
    printf("the maximum element is %d", max);
    printf("sum= %d", sum);
    getch();
    return 0;
}
