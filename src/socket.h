#ifndef SOCKET_H
#define SOCKET_H

#include <netdb.h>
//#include <string>
//#include <memory>

// SocketTCP ->  
// SocketUDP -> Socket - > (win/linux)

namespace Socket {

    class TCP_Socket {
        private:
            addrinfo * p_addrInfo;
        public:
            TCP_Socket();  // init variables, doesn't cll socket()
            /*virtual*/~TCP_Socket();

            void create();
            void bind();
            void connect();
            void listen();
            void accept();

            void send();
            void recv();
            void close();
    };
}


#endif  // SOCKET_H