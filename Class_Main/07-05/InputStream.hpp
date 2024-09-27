#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_

#include "Stream.hpp"

class InputStream :
  public Stream 
{
protected:
  virtual void SetBase();
};


#endif // INPUTSTREAM_H_