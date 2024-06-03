#include <algorithm> 
#include <iostream>
#include "debugger.hpp"

/*int main (int argc, char *argv[]) {
  
  return 0;

*/ 

namespace ArgumentParse{
  class Arguments{
    //Allocate memory
    template <typename T>
    T arg(T argc, T argv[]) : m_argc(argv), m_argv(new char*[argc]); 
    for(int i=0; i<argc; i++){
      m_argv[i] = new char *argv;
    }
    //May need to change this function
    void Clean_argumentparse(arg){
      ~T{}; 
      delete argv{}; //Maybe does not require deleting?
      delete m_argv{};
      cout << "Process finnished"<<endl;
    }
}
