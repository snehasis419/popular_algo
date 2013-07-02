#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int allo[5][3],i,j;
  int max[5][3];
  int res[3];
  int need[5][3];
  int seq[5];
  int sum=0;
  int k,count=0;
  for(i=0;i<5;i++)
  {
     cout<<"process"<<i<<"\n";
     for(j=0;j<3;j++)
     {
        cout<<"resource"<<j<<"\n";
        cin>>max[i][j];
        cin>>allo[i][j];
     }
   }
   cout<<"Max Resources\n";
   for(i=0;i<3;i++)
   {
      cin>>res[i];
   }
   cout<<"enter a seq\n";
   for(i=0;i<5;i++)
   {
      cin>>seq[i];
   }
    for(i=0;i<5;i++)
  {
     
     for(j=0;j<3;j++)
     {
        
        need[i][j]=max[i][j]-allo[i][j];
     }
   }     
   
   for(i=0;i<3;i++)
   {  
      sum=0; 
      for(j=0;j<5;j++)
      {
          sum=sum+allo[j][i];
       }
       res[i]-=sum;
    }
   
   for(i=0;i<5;i++)
   {
       count=0;
       k=seq[i];
       for(j=0;j<3;j++)
       {
         if(res[j]>=need[k][j])
         {
            count+=1;
         }
        }
        if(count!=3)
        {
            goto label;
        }
        if(count==3)
        {
          for(j=0;j<3;j++)
         {
          
         res[j]+=allo[k][j];
         }
         }  
        }
      goto g;
      
      label:
        cout<<"its not a safe sequence\n";
        goto h; 
      g:
      cout<<"it's safe\n"; 

      h:
      return 0;
} 
