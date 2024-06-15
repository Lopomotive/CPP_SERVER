#include "Include/file_path.hpp"
int main (int argc, char *argv[]) {
  string filepath = "Include";
  int perm = S_IRWXG;
  if(file_system::checkpath(filepath, perm)){
    cout << "This works";
  }
  return 0;
}
