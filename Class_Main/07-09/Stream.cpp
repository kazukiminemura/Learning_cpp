#include "Stream.hpp"
#include <iostream>
using namespace std;

Stream::Stream(double n)
{
    cout << "Stream" << endl;
    SetBase(); // will fail due to InputStream::SetBase is not defined yet.
}

double Stream::Get() const {
    return m_n;
}

bool Stream::Set(){
    SetBase();
    return m_n >= 0;
}