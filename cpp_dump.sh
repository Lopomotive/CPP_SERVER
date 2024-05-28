###!bin/bash 
#!bin/zsh

$CPP_DUMP_INSTALL=$(git clone https://github.com/philip82148/cpp-dump.git) 
if [-e "$CPP_DUMP_INSTALL"]; then
  echo "Installing"
else
  echo "Failed to install cpp_dump"
fi 

