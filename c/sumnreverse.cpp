#include<stdio.h>
#include<conio.h>
int main()
{
    int n,z;
    printf("enter a number:\n");
    scanf("%d",&n);
    int sum=0;
    while(n>0);
    {
        z=n%10;
        printf("%d",z);
        sum=sum+z;
        n=n/10;
    }
    printf("sum of digits= %d\n", sum);
    getch();
    return 0;
}
