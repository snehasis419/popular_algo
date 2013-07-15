#include<stdio.h>
#include<conio.h>
int main()
{
    int y=1;
    int s=-1;
    int x;
    int n;
    printf("enter the number of terms upto which series has to be calculated \n");
    scanf("%d",&n);
    int i;
    for(i=1;i<n;i++)
    {
        x=(4*y)-1;
        y=x;
        if(i%2==0)
        s=s-x;
        else
        s=s+x;
    }
    printf("sum of series= %d\n",s);
    getch();
    return 0;
}
