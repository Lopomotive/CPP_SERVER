//This file is currently used for testing the header file down below
#include "argumentparse.hpp"

int main (int argc, char *argv[]) {
  Arguments arg; 
  //I think this is the right way to do it?
  ArgumentParse::arg::(argc, *argv[]); 
  ArgumentParse::arg::Clean_argument(arg);
  ArgumentParse::arg::Clean_argumentparse(arg);
  cout << "Process finnished" <<endl; 
  return 0;
}
