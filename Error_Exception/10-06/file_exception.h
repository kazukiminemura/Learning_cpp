#ifndef FILEEXCEPTION_H_
#define FILEEXCEPTION_H_

#include "exception.h"
#include <string>

class FileException:
  public Exception
{
public:
  FileException(const char* error);
  virtual const char* What() const;

protected:
  std::string m_error; // error message
};

class OpenFileException:
  public FileException
{
public:
  OpenFileException(const char* error);
};

class ReadFileException:
  public FileException
{
public:
  ReadFileException();
};

#endif // #ifndef FILEEXCEPTION_H_