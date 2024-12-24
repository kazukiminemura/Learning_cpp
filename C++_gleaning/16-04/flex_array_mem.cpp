#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// structure for file information
struct FileInfo {
  size_t sizePath;
  size_t sizeFile;
  char path[1];

  // class for managing dynamic memory address
  class Holder {
  public:
    // constructer
    Holder(size_t sizeFile, const char* path){
      size_t sizePath = strlen(path) + 1;

      Init(sizePath);
      m_info->sizeFile = sizeFile;
      strcpy(m_info->path, path);
    }

    //construct without data
    explicit Holder(size_t sizePath) { Init(sizePath); }

    // delete memory
    virtual ~Holder() { delete[] GetAddress(); }

    // get address in (const) char*
    char*       GetAddress()        { return (char*      )m_info; }
    const char* GetAddress() const  { return (const char*)m_info; }

    // get FileiInfo opbject size
    size_t GetSize() const { return CalcSize(m_info->sizePath); }

    // access to FileInfo object members
    FileInfo*       operator->()       { return m_info; }
    const FileInfo* operator->() const { return m_info; }

  private:
    // create object based on path size
    void Init(size_t sizePath){
      m_info = (FileInfo*)new char[CalcSize(sizePath)];
      m_info->sizePath = sizePath;
    }

    //calculate structure size from path size
    static size_t CalcSize(size_t sizePath){
      return offsetof(FileInfo, path) + sizePath;
    }

  private:
    FileInfo* m_info;
  };
};

// name of input and output
const char FILENAME[] = "fileinfo.dat";

// output
void Output(){
  ofstream file;
  file.open(FILENAME, ios::binary);
  if(! file.is_open()){
    return;
  }

  // FileInfo create structure
  const FileInfo::Holder info(42, "Hoge.txt");

  // FileInfo output structure
  file.write(info.GetAddress(), info.GetSize());
}

// Input
void Input(){
  ifstream file;
  file.open(FILENAME, ios::binary);
  if(! file.is_open()){
    return;
  }

  // FileInfo read structure size and return filepointer
  size_t sizePath;
  file.read((char*)&sizePath, sizeof sizePath);
  file.seekg(-(sizeof sizePath), ios::cur);

  // FileInfo create structure
  FileInfo::Holder info(sizePath);

  // FileInfo input structure
  file.read(info.GetAddress(), info.GetSize());

  // output read infomation from the file
  cout << "sizePath : " << info->sizePath << endl
        << "sizeFile: " << info->sizeFile << endl
        << "path    : " << info->path     << endl;
}

int main(){
  Output();
  Input();
}