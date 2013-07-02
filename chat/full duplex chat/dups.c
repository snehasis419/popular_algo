//server


#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
main()
{  int sockfd,fd,len,i,p;char b[25],name[25],name1[25];
   struct sockaddr_in sa,ca;
   sockfd=socket(AF_INET,SOCK_STREAM,0);
   sa.sin_family=AF_INET;
   sa.sin_addr.s_addr=INADDR_ANY;
   sa.sin_port=6663;
   len=sizeof(sa); i=bind(sockfd,(struct sockaddr *) &sa,len); 
   printf("(%d %d)\n",sockfd,i);
   listen(sockfd,5);
  fd=accept(sockfd, (struct sockaddr *) &ca,&len); 
printf("[%d]\n",fd);
printf("\n\n\n");
if(fork())   
{
 gets(b);
   while(strcmp(b,"bye")!=0)
  {send(fd,&b,25,0);
   gets(b);
   }
   send(fd,"bye",25,0);
}
 else 
  recv(fd,&b,25,0);
  while(strcmp(b,"bye")!=0)
  {
    printf("\nClient: %s\n",b);
       recv(fd,&b,25,0);
   }
}
