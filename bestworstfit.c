#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
   int arr[10],i,n,pos=0,dum_size=9999,pos_2=0,dum=-1,pos_3=0;
   cout<<"input the memory\n";
   for(i=0;i<10;i++)
   {
        cin>>arr[i];
   }
   //first fit
   cout<<"enter a memory size\n";
   cin>>n;
   for(i=0;i<10;i++)
   {
      if(arr[i]>=n)
      {
         pos=i+1;
         break;
       }
    }
    //best fit
    for(i=0;i<10;i++)
    {
        if(arr[i]>=n && arr[i]<dum_size)
        {
            pos_2=i+1;
            dum_size=arr[i];
         }
     } 
     //worst fit
     for(i=0;i<10;i++)
     {
        if(arr[i]>dum)
        {
              pos_3=i+1;
              dum=arr[i];
         }
      }
cout<<pos<<"\n"<<pos_2<<"\n"<<pos_3;
          
     return 0;
}  
