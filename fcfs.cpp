#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int p[10],i,j,temp;
  int burst[10];
  int start[10];
  int wait[10];
  int turn[10];
  int time=0;
  for(i=0;i<10;i++)
  {
     cout<<"process start time\n";
     cin>>start[i];
     cout<<"process execution time\n";
     cin>>burst[i];
     p[i]=i+1;
   }
   for(i=0;i<10;i++)
   {
      for(j=0;j<10-i-1;j++)
      {
           if(start[j]>start[j+1])
           {
               temp=start[j];
               start[j]=start[j+1];
               start[j+1]=temp;
               temp=burst[j];
               burst[j]=burst[j+1];
               burst[j+1]=temp;
               temp=p[j];
               p[j]=p[j+1];
               p[j+1]=temp;   
            }
            if(start[j]==start[j+1])
            {
                 if(burst[j]>burst[j+1])
                {
                     temp=start[j];
               start[j]=start[j+1];
               start[j+1]=temp;
               temp=burst[j];
               burst[j]=burst[j+1];
               burst[j+1]=temp;
               temp=p[j];
               p[j]=p[j+1];
               p[j+1]=temp;      
                }
             } 
        }
      } 
      for(i=0;i<10;i++)
      {
          if((time-start[i])<0)
          {
             cout<<time<<"---------";
             time=start[i];
           }
          cout<<time<<"----";
          turn[i]=(time-start[i])+burst[i];
          cout<<"process"<<p[i]<<"----";
          
          wait[i]=time-start[i];
          time=time+burst[i];
        }
       
      cout<<"\n\n\n\n";
      for(i=0;i<10;i++)
      {
          cout<<wait[i];
          cout<<turn[i];
       }
     return 0;
}
