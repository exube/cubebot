#ifndef USER_H
#define USER_H


typedef struct  {
  char* nick;
  char* ident;
  char* hostname;
  char* ircname;

  int port;
  int localport;
} user;

extern void newuser(user*);
extern void deluser(user*);


#endif // USER_H

