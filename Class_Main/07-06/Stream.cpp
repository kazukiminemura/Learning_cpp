#include "Stream.hpp"
#include <iostream>
using namespace std;

double Stream::Get() const {
    return m_n;
}

bool Stream::Set(){
    SetBase();
    return m_n >= 0;
}