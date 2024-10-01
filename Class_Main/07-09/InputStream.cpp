#include "InputStream.hpp"
#include <iostream>
using namespace std;

InputStream::InputStream(double n) :
  Stream(n)
{
  cout << "InputStream" << endl;
}

void InputStream::SetBase(){
  cin >> m_n;
}