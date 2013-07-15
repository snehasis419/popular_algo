//The commands related to Memory are 
//pmap, pstree, /proc/meminfo, ps auxf, ps aux, ps -A
//1. Practice the commands given above
//2. Read the file /proc/meminfo using read mode
//3. read the second column using an integer and assign it to an array
//4. sort the array using ascending or descending order and print it

#include<stdio.h>
struct meminfo
{
int data;
char strin[50];
char sts[5];
};
int main()
{
int i=0;
struct meminfo arr[150];
FILE *f;
f=fopen("/proc/meminfo","r");
while(!feof(f))
{
fscanf(f,"%s%d%s",(arr[i].strin),&arr[i].data,(arr[i].sts));
i++;
}
int j=0;
int n;
n=i-1;
struct meminfo temp;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j].data>arr[j+1].data)
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(j=0;j<n-2;j++)
{
printf("%s%d%s\n",arr[j].strin,arr[j].data,arr[j].sts);
}
return 0;
}
