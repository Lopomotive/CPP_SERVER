//This is a beta version of the code although it works as intended
#include <filesystem> //Filesystem may be unecessary 
#include <sys/stat.h>
#include <iostream>
#include <string>
using namespace std;
void error_msg(auto variable) {
  std::cerr << variable << " has an erorr" << endl;
}
namespace fs = std::filesystem;

namespace file_system{
  template <typename T> 
  bool checkpath(const string& path, const T& perm){
    struct stat sb;

    if constexpr(is_same_v<decltype(perm), int>){
      return 0;
    }
    if((S_ISDIR(sb.st_mode)) || sb.st_mode & perm){
      return true;
    }
    else{
      return (sb.st_mode & S_IFDIR)!=0;
    }
  }
  std::cout << path << " not found" << endl;
}

