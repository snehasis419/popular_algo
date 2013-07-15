//When a program calls fork, a duplicate process, called the child process, 
//is created. The parent process continues executing the program from the point that fork
// was called. The child process, too, executes the same program from the same place.
// So how do the two processes differ? First, the child process is a new process 
//and therefore has a new process ID, distinct from its parent’s process ID.
//One way for a program to distinguish whether it’s in the parent process or the 
//child process is to call getpid. However, the fork function provides different 
//return values to the parent and child processes—one process “goes in” to the fork 
//call, and two processes “come out,” with different return values.The return value 
//in the parent process is the process ID of the child.The return value in the child 
//process is zero. Because no process ever has a process ID of zero, this makes it 
//easy for the program whether it is now running as the parent or the child process.

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
pid_t pid;
pid=fork();
printf("%d\n",pid);
if(pid<0)
{
printf("fork failed");
}
else if(pid==0)
{
execlp("/bin/ls","ls",NULL);
}
else
{ 
wait(NULL);
printf("child process completed");
}
return 0;
}
