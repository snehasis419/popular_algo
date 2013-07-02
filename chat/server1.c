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
   sa.sin_port=6001;
   len=sizeof(sa); i=bind(sockfd,(struct sockaddr *) &sa,len); 
   printf("(%d %d)\n",sockfd,i);
   listen(sockfd,5);
  fd=accept(sockfd, (struct sockaddr *) &ca,&len); 
printf("[%d]\n",fd);
printf("type bye to end the chat bitches.......\n\n\n");
printf("enter your name to enter the chat club\n");
gets(name);
printf("\n\n\n");
while(1)   
{
 recv(fd,&name1,25,0);
recv(fd,&b,25,0);
if(strcmp(b,"bye")==0)
      break;
//printf("client sent ");
puts(name1);
printf("says:");
puts(b);
//printf("Give a string for client");
   puts(name);
   printf("says:");
   gets(b);
   if(strcmp(b,"bye")==0)
     break;
   send(fd,&name,25,0);
   send(fd,&b,25,0);
}
   send(fd,&name,25,0);
   send(fd,&b,25,0);
  
   //printf("\nGive string to send to client");scanf("%s",b);
  // send(fd,&p,4,0);
}



