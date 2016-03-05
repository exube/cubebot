#ifndef MAIN_H
#define MAIN_H


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

#include "user.h"
#include "macros.h"

#endif // MAIN_H
