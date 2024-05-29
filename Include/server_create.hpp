#include <sys/socket.h> 
#include <netdb.h> 
#include <netinet/in.h> 
#include <string> 

class Name {
public:
  Name();
  Name(Name &&) = default;
  Name(const Name &) = default;
  Name &operator=(Name &&) = default;
  Name &operator=(const Name &) = default;
  ~Name();

private:
  
};

Name::Name() {
}

Name::~Name() {
} 

class Server{
  public:
  protected:
    ip_addr()
    virtual void SocketConfig(){}

}
