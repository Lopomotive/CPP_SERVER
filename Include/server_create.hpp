#include "debugger.hpp"
#include "server_observer.hpp"
#include "tcp_libs.hpp"
#include "null_val.hpp"
#include "null_val.hpp" //Checkvalid function
#include <string>
#include <filesystem> 
namespace fs = std::filesystem; 

//If not included

class SocketOptions{
  public: 
    //Check directory and look in files that end with .conf
    //Continue the function below
    void SocketOptionsConfigFile(){
      ConfigFileRead cfg;

      //Checks the config file from config_file_parse.hpp
      
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

