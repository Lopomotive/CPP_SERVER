//Debugger will probably be updated
#include <cerr.h> 
#include <excetpion> 
#include <iostream> 
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
  public:
    typedef *void(*Debug_function)(void);
    ManualDebug(*Debug_function func) : debugFunc(func){};
    Debug_function debugFunc; 

    size_t Float_binary_size = 100; 
    unsigned char * Float_binary = (*unsigned char)malloc(Float_binary);
    void DebuggingTools(bool DownloadDebugger){
      if(DownloadDebugger){
        system("sudo chmod 755 cpp_dump.sh");
        int cpp_dump_install = system("./cpp_dumb.sh");
        if(cpp_dump_install==0){
          cerr << "Failed to run";
        }
        delete [] cpp_dump_name; 
        free(cpp_dump_name)
      }
      //Inline needed here?
      inline void DebugFile(*Debug_function func){
        //Hopefully this dosent repeat it twice?
        if(cpp_dump(func)){
          cpp_dump(func);
        }
        else{
          DEBUG(func)
        }
      }
    }
}
#endif
