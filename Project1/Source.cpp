#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include "Source.h" 

//#pragma comment(lib, "Ws2_32.lib")

WSADATA wsaData;
struct addrinfo *result = NULL, *ptr = NULL, hints;

int main() {

	int iResult;

	// Initialize Winsock
	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0) {
		printf("WSAStartup failed: %d\n", iResult);
		return 1;
	}


	return 0;
}