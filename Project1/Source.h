#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <stdio.h>


#define DEFAULT_PORT "27015"
WSADATA wsaData;

struct addrinfo *result = NULL, *ptr = NULL, hints;