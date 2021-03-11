#ifdef _WIN32
   #define external          \
      extern "C"             \
      __declspec(dllexport)
#endif

#ifdef __linux__ 
   #define external          \
      extern "C"             
#endif

#include <string>
#include <iostream>

static int data=0;
std::string s;

external void
hello_world()
{
	std::cout << "Hello World!" << std::endl;
}

external void
set_str(const char* _s)
{
   s = _s;
}

external void
print_str()
{
   std::cout << "Current value of str is: " << s << std::endl;
}

external const char*
get_str()
{
   return s.c_str();
}

external void
set_int(int v)
{
   data = v;
}

external void
print_int()
{
   std::cout << "Current value of int is: " << data << std::endl;
}

external int
get_int()
{
   return data;
}