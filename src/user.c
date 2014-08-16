
#include <stdlib.h>
#include "user.h"

void newuser(user* obj) {
  obj->nick = (char*)malloc(16*sizeof(char));
  obj->ident = (char*)malloc(16*sizeof(char));
  obj->hostname = (char*)malloc(32*sizeof(char));
  obj->ircname = (char*)malloc(32*sizeof(char));
}

void deluser(user* obj) {
  free(obj->nick);
  free(obj->ident);
  free(obj->hostname);
  free(obj->ircname);
}
