//Debugger will probably be updated
#include <exception>
#include <iostream> 
#include <stdio.h>
#include <filesystem>
#include <functional>
#include <vector>
//#include "cpp_dump.hpp" Third party debugging header
using namespace std;
#define READ_ERRORS true

#ifdef DEBUG_BUILD
#  define DEBUG(x) cerr << x
#else
#  define DEBUG(x) do {} while (0)
#endif
//Check this out and learn how to do this, its embarssing that you do not
template<typename... func> 
vector<void*> GetDebugArgs(size_t count, func&&... args){
  struct Debuggable{
    Debuggable(auto func) : func(func) {};
    auto func; 
    if(func != nullptr)
  }
  va_list ap; 
  if(count == nullptr || count != static_cast<unsigned int>(count)){
    count = (size_t*)malloc(sizeof(apc)); //Size may change but it should be alright
  }
  for(int i=0; i<count; i++){
    bool isValidarg = (... && is_same_v<decltype(args), Debuggable)
  }
}

#ifndef MANUALDEBUG 
#define MANUALDEBUG
struct ManualDebug{
  template<typename T>
    T
};
#endif


   void DebugFilePath(auto file_path){
        if(exist(file_path) || file_path.write()){
          cout << "File valid" << endl; 
        }
        else{
          perror << file_path << "Invalid" <<endl;
        }
      }
    }
