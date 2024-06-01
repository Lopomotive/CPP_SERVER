#include <iostream>
#include <cerr.h> 

struct ValueCheck(){
  template <typename T>
  void CheckValid(T& X){
    if(X==nullptr || X == -1){
      perror << X;
      //Exit failure might not be a good idea?
      exit(EXIT_FAILURE); 
    }
  }
}
