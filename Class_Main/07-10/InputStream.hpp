#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_

#include "Stream.hpp"

class InputStream:
  public Stream 
{
public:
  InputStream(double n);

protected:
  virtual void SetBase();
};


#endif // INPUTSTREAM_H_