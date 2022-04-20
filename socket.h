#define CLIENT 0
#define SERVER 1

int createSocket( int* sockfd, struct sockaddr_in* sockAddress, int port, int type);
