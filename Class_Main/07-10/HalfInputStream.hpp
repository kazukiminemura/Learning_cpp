#ifndef HALFINPUTSTREAM_H_
#define HALFINPUTSTREAM_H_

#include "InputStream.hpp"

class HalfInputStream:
  public InputStream 
{
protected:
  virtual void SetBase();
};


#endif // #ifndef HALFINPUTSTREAM_H_