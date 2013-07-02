//round robin with time quanta 2

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  int p[10],i,j,temp;
  int burst[10];
  int start[10];
  int wait[10];
  int turn[10];
  int exe[4]={0};
  int time=0,n=0;
  int comp[4]={0};
  for(i=0;i<4;i++)
  {
     cout<<"process execution time\n";
     cin>>burst[i];
     p[i]=i+1;
   } 
  while(n!=4)
  {
     for(i=0;i<4;i++)
     {
        if((burst[i]-exe[i])==0  && comp[i]==0)
        {
           comp[i]=1;
           n+=1;
         }     
        else if((burst[i]-exe[i]==1) && comp[i]==0)
        {
           cout<<"process"<<i+1;
           comp[i]=1;
           n+=1;
           for(j=0;j<4;j++)
           {
               if(i!=j)
               {
                  wait[j]+=1;
                }
            }
         }
         else if((burst[i]-exe[i])>=2 && comp[i]==0)
         {
            cout<<"process"<<i+1;
            cout<<"process"<<i+1;
            exe[i]+=2;
            for(j=0;j<4;j++)
           {
               if(i!=j)
               {
                  wait[j]+=2;
                }
            }    
         }
    }
   } 
         return 0;
}
