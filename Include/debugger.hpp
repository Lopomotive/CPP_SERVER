//This debugger file currently is awful and should be changed
#include <cerr.h> 
#include <iostream> 
#include <fstream> 
#include <string> 
#include <sys/socket.h> 
#include <stdio.h>
#include "cpp_dump.hpp" //Third party debugging header
using namespace std;
#define READ_ERRORS true

#ifdef DEBUG_BUILD
#  define DEBUG(x) cerr << x
#else
#  define DEBUG(x) do {} while (0)
#endif

#ifndef MANUALDEBUG 
#define MANUALDEBUG
class ManualDebug(){
  //Use inline in these functions
  public:
    //Dont know how to do this otherwise
    typedef *void(*Debug_function)(void);
    ManualDebug(*Debug_function func) : (void)DebugFile() {};
    size_t Float_binary_size = 100; 
    unsigned char * Float_binary = (*unsigned char)malloc(Float_binary);
    void DebuggingTools(bool DownloadDebugger){
      if(DownloadDebugger){
        system("sudo chmod 755 cpp_dump.sh");
        int cpp_dump_install = system("./cpp_dumb.sh");
        if(cpp_dump_install==0){
          cerr << "Failed to run";
        }
        else{
          DownloadDebugger = true;
        }
        //Delete allocated memory, both methods not needed?
        delete [] cpp_dump_name; 
        free(cpp_dump_name)
      }
      void DebugFile(*Debug_function func){
        //Hopefully this dosent repeat it twice?
        if(cpp_dump(func)){
          cpp_dump(func);
        }
        else{
          DEBUG(func);
        }
      }
    }
}
#endif
