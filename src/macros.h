#ifndef MACROS_H
#define MACROS_H

#define MAXCLIENTS 30

// Look at our platform
#if defined(__unix__) || defined(__linux__) || defined(__freebsd__)
#define PLATFORM_LINUX
#else
#if defined(_WIN32)
#define PLATFORM_WINDOWS
#endif

#endif
