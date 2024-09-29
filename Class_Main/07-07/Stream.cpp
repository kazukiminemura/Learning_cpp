#include "Stream.hpp"
#include <iostream>
using namespace std;

Stream::Stream(){
    cout << "Stream" << endl;
    m_n = -1;
}

double Stream::Get() const {
    return m_n;
}

bool Stream::Set(){
    SetBase();
    return m_n >= 0;
}