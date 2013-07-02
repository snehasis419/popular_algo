#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int p[10],i,j,temp,pro;
  int burst[10];
  int comp[10]={0};
  int start[10];
  int wait[10];
  int turn[10];
  int time=0,dur=9999;
  for(i=0;i<4;i++)
  {
     cout<<"process start time\n";
     cin>>start[i];
     cout<<"process execution time\n";
     cin>>burst[i];
     p[i]=i+1;
   }
   cout<<time;
   if(start[0]>time)
   {
     cout<<time<<"---------";
    }
    time=start[0];
    
   for(i=0;i<4;i++)
   {
      dur=9999;
      for(j=0;j<4;j++)
      {   
          if(time>=start[j] && comp[j]==0)
          {
              if(dur>burst[j])
              {
                  pro=p[j];
                  dur=burst[j];
               }   
            }
        }
       cout<<time<<"---------"<<"process"<<p[pro-1];
       comp[pro-1]=1;
       turn[pro-1]=(time-start[pro-1])+burst[pro-1];
       wait[pro-1]=time-start[pro-1];
       time=time+burst[pro-1];
      } 
return 0;
}
