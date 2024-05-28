//This is a debugger that can debug programs in mutliple ways
#include <cerr.h> 
#include <iostream> 
#include <fstream> 
#include <string> 
#include <sys/socket.h> 
#include <stdio.h>
#include "cpp_dump.hpp" //Third party debugging header
#ifdef DEBUG_BUILD
#  define DEBUG(x) cerr << x
#else
#  define DEBUG(x) do {} while (0)
#endif

#ifndef MANUALDEBUG 
#define MANUALDEBUG
class ManualDebug(){
  public:
    //Dont know how to do this otherwise
    typedef *void(*Debug_function)(void);
    ManualDebug(*Debug_function func) {};
    size_t Float_binary_size = 100; 
    unsigned char * Float_binary = (*unsigned char)malloc(Float_binary);
    void DebuggingTools(bool DownloadDebugger, int status){
      if(DownloadDebugger){
        system("sudo chmod 755 cpp_dump.sh");
        system("./cpp_dumb.sh");
      }
    }
}
#endif
