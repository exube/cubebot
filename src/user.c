
#include <stdlib.h>
#include "user.h"

void newuser(user* obj, long portno,  ) {
  obj->nick = (char*)malloc(16*sizeof(char));
  obj->ident = (char*)malloc(16*sizeof(char));
  obj->hostname = (char*)malloc(32*sizeof(char));
  obj->ircname = (char*)malloc(32*sizeof(char));

  memset(nick,0,16);
  memset(ident,0,16);
  memset(hostname,0,32);
  memset(ircname,0,32);

  obj->
}

void deluser(user* obj) {
  free(obj->nick);
  free(obj->ident);
  free(obj->hostname);
  free(obj->ircname);
}
