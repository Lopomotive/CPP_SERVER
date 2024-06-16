//This is a beta version of the code although it works as intended
#include <filesystem> //Filesystem may be unecessary 
#include <sys/stat.h>
#include <iostream>
#include <string>
#include <optional> 
#include <type_traits>
#include <iterator>
#include <functional>
#include <vector>

using namespace std;
void error_msg(auto variable) {
  std::cerr << variable << " has an erorr" << endl;
}
namespace fs = std::filesystem;

template <typedef itr_t>
static void MapDirectory(string cur_dir, itr_t t){
  for(; itr!=itr_end; itr++){

  }
}

//Experimental code I might use later
typedef struct {
  using element_type = remove_refrence_t<decltype(args)>; //Ignore if its refrence or pointer or normal
  int * files_vector_size = sizeof(files_vector);
}Something_exp;

//Continue with this tommorow
struct exe_files{
  template <typename... exe_files>
    const string config_file_param(exe_files&&... args, optional<auto*>&param = nullopt){

      string cur_path = fs::current_path();
      fs::directory_iterator itr_end;
      fs::directory_iterator itr(cur_path);
      MapDirectory(cur_path, )
      inline for(const auto& files : {
        fs::path cur_path(files);
        while(itr!=end_itr){
          fs::file_status exe_file_status = fs::status(itr->files); 
          string permissions = [=](char op,files);
          void SetPermissions(string perm_rule){
            auto show = [&](char op, perms perm){
              permissions += (fs::perms::none=(perm & p) ? "-" : op);
            };
            auto Permissions_list = {
              ("a", fs::perms::owner_all); 
              ("r", fs::perms::group_read);
              ("r", fs::perms::others_read);
            };
            show(Permissions_list);
            return permissions;
          }
          set_permissions(permissions(files).permissions();
          if(!fs::status(files).permissions() == permissions){
            FILE * file_fd = fopen(files.c_str()); 
            if(!file_fd){
              error_msg(files);
            }
          }
        }
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

