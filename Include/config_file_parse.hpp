#include "debugger.hpp" //Standard implemented debugger
#include "check_config_file.hpp"
#include <algorithm>
#include <string> 
#include <stdio.h> 
#include <filesystem> 
using namespace std;
typedef vector <unsigned char> binary;


struct ConfigFileRead(){
  string FileType{
    dir_path(*string); //Put the directory path here
    for(const auto& entry : fs::directory_iterator(dir_path)){
      if(entry=="Config" || fs::is_directory(entry)){
        return entry;
      }
    }
    size_t auto debug_inf = DEBUGGER(entry); //Should work with the directoryJ
    if(debug_inf == 1 || debug_inf ==nullptr){
      ManualDebug dbg;
      dbg.DebugFilePath(entry);
      
    }
  }
  //May need to include objects
 inline auto CheckDir(){

 }
