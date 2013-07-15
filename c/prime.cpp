#include<stdio.h>
#include<conio.h>
int main()
{
    int n,f=0,i=1;
    printf("enter a number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            f=f+1;
        }
        i=i+1;
    }
    if(f==2)
        printf("the number is prime");
        else
        printf("the number is not a prime");
        getch();
        return 0;
    }
        
