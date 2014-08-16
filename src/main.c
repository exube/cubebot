#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#include "user.h"

int main()
{
  
  user* test = (user*)malloc( 5 * sizeof( user ) );
  newuser(&test[0]);
  strcpy( test[0].nick, "ecube" );
  printf( "Hello world! %s\n", test[0].nick );
  deluser(&test[0]);
  free( test );
  return 0;
}

