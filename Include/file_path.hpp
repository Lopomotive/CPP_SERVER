//This is a beta version of the code although it works as intended
#include <filesystem> //Filesystem may be unecessary 
#include <sys/stat.h>
#include <iostream>
#include <string>
#include <optional> 
using namespace std;
void error_msg(auto variable) {
  std::cerr << variable << " has an erorr" << endl;
}
namespace fs = std::filesystem;

//Continue with this tommorow
struct exe_files{
  template <typename... exe_files>
    vector <*string> files;
    const string(exe_files..., optional<auto*>&param = nullopt){
      for(const auto& files : sizeof(exe_files)){
        fs::path cur_path(files);
        fs::directory_iterator itr(cur_path);
        fs::directory_iterator end_itr;
        for(; itr!=end_itr)
        fs::file_status exe_file_status = fs::status(itr->files); 
        string permissions = [=](itr->exe_files);
        void SetPermissions(string perm_rule){
          auto show = [&](char op, perms perm){
            permissions += (fs::perms::none=(perm & p) ? "-" : op);
          };
          show("a", fs::perms::owner_all); 
          show("r", fs::perms::group_read);
          show("r", fs::perms::others_read);
          return permissions;
        }
        set_permissions(permissions(exe_files).permissions();
      }
    }
}

void CreateFile(string cur_file_name){
  fs::perms file_perms = status(cur_file_name).permissions();
  //ifstream file_create(cur_file_name.c_str()); 
}

void HandleStatus(file_status status){
  string cur_file_name = itr->path().filename();
  switch(status){
    case (status==file_not_found()):
      CreatFile(cur_file_name);
  }
}

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
    std::cerr << path << "has error" << endl;
  }
  const path & dir_path = "Config";
  if(!exists(dir_path)) error_msg(dir_path);
  fs::directory_iterator end_itr; //Is the end of the directory
  for(directory_iterator itr(dir_path); itr!=end_itr; itr++){
    file_status status = itr->status();
    if(status){
      
    }
  }
}

