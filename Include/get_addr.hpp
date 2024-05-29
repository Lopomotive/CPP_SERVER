#include "tcp_libs.hpp"
#include <errno.h> //May be better to just use the debugger variable 
#include "debugger.hpp"
cj

struct GetIp(){
  protected: 
    Ip_addr = nullptr;
    Get_IP_Addr Ip_addr;
    void CheckHostname(int hostname){
      if(hostname == -1 || hostname == 0){
        //Catching this error may not be optimal and debugger function may be a more vaiable option
        catch(const exception &e){
          perror << e.what() << endl;
          exit(EXIT_FAILURE)
      }
    }
    //Check this constructor out tommorow
    explicit GetIp(Get_IP_Addr nullptr) : Ip_addr(Ip_addr){
      char host[256]; 
      char * Ip_addr_ptr = new Ip_addr; 
      struct hostnet *host_entry; 
      int hostname; 
      //This will be continued on

    }
     
  }
}
