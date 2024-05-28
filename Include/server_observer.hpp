//This needs to be worked on and improved ASAP
#pragma once 
#include <string>
#include <function> 
#include <sys/socket.h> 
#include <typeid> //To check what variable typeid
#include <iostream> 
#include <format> //What does this do?
#include <cstdio> 
#include <cerr.h> 
#include <function> //For function
#pragma once

struct server_observer_t{
  WantedIp(*auto); 
  if(typeid(WantedIp) != typeid(std::string)){
    try{
      string WantedIp = to_string(WantedIp);
    }
    catch(const &exception e){
      cerr << e.what() << endl;  
    }
  }
  //Include some sort of function
  explicit std::function <
}
