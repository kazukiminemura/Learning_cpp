#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_

#include "Stream.hpp"

class InputStream :
  public Stream 
{
public:
  virtual bool Set();
};


#endif // INPUTSTREAM_H_