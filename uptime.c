///proc/uptime contains the system uptime and idle time in seconds.
//Write a C program to convert the seconds into days, hours, minutes and seconds.
//you can see the content of /proc/uptime using the command "vi /proc/uptime" or "gedit /proc/uptime"


#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
void printin ( int a )
{
cout<<"Hours : ";
cout<< (a/(3600));
cout<<"\nMin : ";
cout<< ( ( a % (3600) ) / 60 );
cout<<"\nSeconds : ";
cout<< ( ( a % (3600) ) % 60 );

}
int main ()
{
ifstream fin;
fin.open("/proc/uptime");
float temp;
int a;
fin>>temp;
a=temp;
cout<<"System UpTime is\n";
printin (a);
fin>>temp;
a=temp;
cout<<"\n\nSystem Idle Time is\n";
printin (a);
cout<<"\n";
return 0;

}
