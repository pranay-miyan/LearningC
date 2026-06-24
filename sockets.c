/* sockets.c */
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


//#define IP "192.178.223.101" // google.com
#define IP "74.6.231.21" // yahoo.com
#define PORT 80 // http, https-443

// sockets are end point of 2 devices to communicate



int main () {
    int s;
    struct sockaddr_in sock;
    char buf[512];
    char *data;

    data = "HEAD/ HTTP/1.0\r\n\r\n";

    s = socket(AF_INET /*means using ipv4 */ , SOCK_STREAM /*means using tcp*/, 0);
    if (s < 0) {
        printf("socket() error\n");
        return -1; //-1 means error occured
    }

    sock.sin_addr.s_addr = inet_addr(IP); //converts ip in network btye
    sock.sin_port = htons(PORT); //converts port into network byte
    sock.sin_family = AF_INET; //tells construct using ipv4

    if (connect(s, (struct sockaddr *)&sock, sizeof(struct sockaddr_in)) != 0) {
        printf("Connect() error\n");
        close(s);
        
        return -1;
    }

    write(s, data, strlen(data));
    memset(buf, 0 ,512);

    read(s, buf, 511);
    close(s);

    printf("\n%s\n", buf);

    return 0;

}