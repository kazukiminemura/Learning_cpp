#include "InputStream.hpp"
#include <iostream>
using namespace std;

InputStream::InputStream(){
  cout << "InputStream" << endl;
}

void InputStream::SetBase(){
  cin >> m_n;
}