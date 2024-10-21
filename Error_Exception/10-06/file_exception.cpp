#include "file_exception.h"

FileException::FileException(const char* error){
  m_error = error;
}

const char* FileException::What() const {
    return m_error.c_str();
}


OpenFileException::OpenFileException(const char* filename):
  FileException("Failed to open the file")
{
  m_error += "\nfile name: ";
  m_error += filename;
}

ReadFileException::ReadFileException():
  FileException("Failed to read the file")
{
}