#include "hashfn.h"
#include <string>
using namespace std;

// specializing by string
template <>
  size_t HashFn<string>::Get(const string& value)
{
  size_t size = value.size();
  const unsigned char* p =
    reinterpret_cast<const unsigned char*>(value.data());
  
  return (p[0] + p[size / 2] + p[size - 1]) % SIZE;
}