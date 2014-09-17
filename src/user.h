#ifndef USER_H
#define USER_H


typedef struct  {

  long sockfd, portno, n;
  struct sockaddr_in serv_addr;
  struct hostent* server;

  char buffer[256];
  
  char* nick;
  char* ident;
  char* host;
  char* ircname;

} user;

extern void newuser(user*);
extern void deluser(user*);
extern void connectuser(user*);


#endif // USER_H

