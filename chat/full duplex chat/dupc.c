//clients

#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
main()
{  int sockfd,len,i,a;char s[25],name[25],name1[25];
   struct sockaddr_in sa;
   sockfd=socket(AF_INET,SOCK_STREAM,0);
   sa.sin_family=AF_INET;
   sa.sin_addr.s_addr=inet_addr("127.0.0.1");
   sa.sin_port=6663;
   len=sizeof(sa);
   i=connect(sockfd,(struct sockaddr *) &sa,len);
   printf("(%d %d)\n",sockfd,i);
printf("\n\n\n");
if(fork())   
{
 gets(s);
   while(strcmp(s,"bye")!=0)
  {send(sockfd,&s,25,0);
   gets(s);
   }
  send(sockfd,"bye",25,0);
  
}
 else 
  recv(sockfd,&s,25,0);
  while(strcmp(s,"bye")!=0)
  {
    printf("\nServer: %s\n",s);
       recv(sockfd,&s,25,0);
   }
 
}

