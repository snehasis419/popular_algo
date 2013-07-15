//A command uname -a displays about the OS and Machine architecture. It gives you a string of information.
//divide the string as per the help given while executing uname --help
//Write a C program to display the kernel name, nodename, kernel release, kernel version, machine, processor, hardware platform, operating system.
//Use system("uname -a "); // to execute any Linux OS command inside a C program

#include<stdio.h>
#include<stdlib.h>
int main()
{
system("uname -a");
system("uname -s");
system("uname -n");
system("uname -r");
system("uname -v");
system("uname -i");
system("uname -m");
system("uname -p");
system("uname -o");
return 0;
}
