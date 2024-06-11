#include <filesystem> 
#include <iostream>
#include "debugger.hpp" //Still dosent have file debugging capabilities, will be added later
using namespace std;
namespace fs = std::filesytem;

namespace file_system{
  bool file(const string& filePath){
    fd = (int*)malloc(sizeof(unsigned int));
    fd = open(filePath, O_DWR);
    if(fd > 0){
      perror << "File error " << &filePath << endl;
    }
    return fs::exists(filePath);
  }
  bool directory()
}

