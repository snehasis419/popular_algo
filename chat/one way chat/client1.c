
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
   sa.sin_port=6001;
   len=sizeof(sa);
   i=connect(sockfd,(struct sockaddr *) &sa,len);
   printf("(%d %d)\n",sockfd,i);
   printf("type bye to end the chat bitches.......\n\n\n");
   printf("enter your name to enter the chat club\n");
   gets(name);
printf("\n\n\n");
   while(1)
   {
    //printf("Give a string for server");
   puts(name);
   printf("says:");
   gets(s);
   
   if(strcmp(s,"bye")==0)
      break;
   send(sockfd,&name,25,0); 
   send(sockfd,&s,25,0);
   //printf("server sent ");
    recv(sockfd,&name1,25,0); 
    recv(sockfd,&s,25,0);
   if(strcmp(s,"bye")==0)
     break;
   puts(name1);
   printf("says:");
   puts(s);
  
   }
   send(sockfd,&name,25,0);
   send(sockfd,&s,25,0);
  // recv(sockfd,&s,4,0);printf("server sent %d\n",s);
}



