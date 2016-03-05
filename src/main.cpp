#include "macros.h"
#include "main.h"

#if defined(PLATFORM_LINUX)
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#include <sys/select.h>
#elif defined(PLATFORM_WINDOWS)
#include <WinSock2.h>
#endif
long validint(const char* str);

void error(const char* msg) {
  perror(msg);
  exit(0);
}



long main(long argc, char** argv) {
  int i; // Index
  if (argc < 3) {
    fprintf(stderr, "usage: %s <hostname> <port>", argv[0]);
    exit(0);
  }
  if (!validint(argv[2])) {
    fprintf(stderr, "usage: %s <hostname> <port>", argv[0]);
    exit(0);
  }
  // New user

  user* clients = (user*)malloc(MAXCLIENTS*sizeof(user));

  // Initialize the dynamic block of memory
  for (i=0; i<MAXCLIENTS; i++ ) {
    newuser(&clients[i]);
  }
  // Initialize the connection struct, or something
  // sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if (sockfd < 0) {
    error("error opening socket");
  }

  server = gethostbyname(argv[1]);
  if (server == NULL) {
    error("error: no such host");
  }
  memset((char*) &serv_addr, 0, sizeof(serv_addr));
  serv_addr.sin_family = AF_INET;

  memcpy((char*) &server->h_addr, (char*)&serv_addr.sin_addr.s_addr, server->h_length);

  serv_addr.sin_port = htons(portno);
  if (connect(sockfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0) {
    error("error connecting");
  }

  
  
  user* test = (user*)malloc( 5 * sizeof( user ) );
  newuser(&test[0]);
  strcpy(test[0].nick, "ecube");
  printf( "Hello world! %s\n", test[0].nick );
  deluser(&test[0]);
  free( test );
  free(clients);
  return 0;
}

long validint(const char* str) {
  char* endptr;
  strtol(str, &endptr, 0);
  if (*str != 0 && *endptr == 0) {
    return 1;
  } 
  return 0;
}
