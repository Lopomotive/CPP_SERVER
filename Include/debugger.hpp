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
  //Use inline in these functions
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
        
        
        string * cpp_name_temp = nullptr; 
        string * cpp_dump_name = (string*)malloc(sizeof(string));
        string cpp_dump_name = "/cpp_dump"; //Should be obvious but good to be stated
        ifstream f(name )

        //Delete allocated memory, both methods not needed?
        delete [] cpp_dump_name; 
        free(cpp_dump_name)
      }
    }
}
#endif
