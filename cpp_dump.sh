###!bin/bash 
#!bin/zsh

$FOLDERNAME="cpp_dump"
$CPP_DUMP_INSTALL=$(git clone https://github.com/philip82148/cpp-dump.git) 
if [! -d "$FOLDERNAME"]; then   
  if [-e "$CPP_DUMP_INSTALL"]; then
    echo "Installing $FOLDERNAME"
  else
    echo "Failed to install cpp_dump"
  fi 
else
  echo "Folder already exists"
fi

