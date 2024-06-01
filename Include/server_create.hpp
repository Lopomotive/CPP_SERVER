#include "debugger.hpp"
#include "server_observer.hpp"
#include "tcp_libs.hpp"
#include "null_val.hpp"
#include <string>

//If not included

class SocketOptions{
  public: 
    //Check directory and look in files that end with .conf
    //Continue the function below
    void SocketOptionsConfigFile(){
      string Socket_config_file = "socketoptions.conf"; 
    }
  protected: 
    char(socket_buffer[]);
    //If condition may be moved?
    if(socket_buffer == nullptr){
      DEBUG(socket_buffer); 
      perror << socket_buffer;
      exit(EXITFAILURE);
    }
  private: 
    auto SocketConfig(){
      constexpr int opt = 1; 
      socklen_t optlen=sizeof(opt); 
      int sock=socket(AF_UNIX, SOCK_STREAM, 0);}
      //Should work with the "null_val.hpp file"
      ValueCheck(CheckValid(sock));
      setsockopt(sock, SOL_SOCKET, SO_REUSEADDR|SO_REUSEPORT, &opt, optlen);
    }
}

