#include<stdio.h>
int main()
{
   int a[10][10],n,i,j,s,d,selected[10],val[10],min=0,current,tot=0;
   for(i=0;i<10;i++)
   {
      selected[i]=0;
      val[i]=9999;
   } 
   printf("enter the no of nodes(max 10)\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
         printf("enter the distance between");
         printf(" %d and %d\n",i,j);
         scanf("%d",&a[i][j]);
      }
    } 
    printf("enter the source\n");
    scanf("%d",&s);
    printf("enter the destination\n");
    scanf("%d",&d);
    val[s]=0;
    selected[s]=1;
    current=s;
    while(current!=d)
    {
        for(i=0;i<n;i++)
        {
            if(i!=current && a[current][i]!=-1 && selected[i]==0)
             {  
               tot=val[current]+a[current][i];
               if(tot<val[i])
               {
                   val[i]=tot;
               }
              }
          }
        
         min=9000; 
         for(j=0;j<n;j++)
         { 
            if(val[j]<min && selected[j]==0)
            {
                 min=val[j];
                 current=j;
             }
          }
          //printf("%d",current);
          selected[current]=1;    
      }
      printf("the value is\n");
     printf("%d",val[current]);
    return 0;
} 

