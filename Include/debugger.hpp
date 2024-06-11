#include <exception>
#include <iostream> 
#include <stdio.h>
#include <filesystem>
#include <functional>
#include <vector>
#include <type_trait>

#include "variable_names.h"

using namespace std;
#define READ_ERRORS true

#ifdef DEBUG_BUILD
#  define DEBUG(x) cerr << x
#else
#  define DEBUG(x) do {} while (0)
#endif
//Check this out and learn how to do this, its embarssing that you do not
template<typename Func>
class CheckConditions{
  public:
    CheckConditions(Func func)> : func_(func){}; 
    CheckConditions()~; 
    static constexpr char = is_valid_v
  private:
    Func func_;
}; 
template <typename Func, typename... Args, typename *Misc..., template<typename> class CheckConditions>
void DebugInformation(Func func, Args&&... args, Misc &misc){
  va_list misc_list
  va_start(misc_list, misc); 
  for(const auto& misc_args : sizeof(misc_list)){
    Misc arg = va_arg(misc_list, Misc); 
    switch(&misc){
      case ""
    }
  }
  using ReturnType = <decltype(func(), void_t>);
  static_assert(is_same_v(ReturnType); //I think returntype is valid here
  static_assert(ReturnType = void);
  size_t argumentsize = sizeof(args); 
  for(const auto 
}

void FunctionWrapper()
