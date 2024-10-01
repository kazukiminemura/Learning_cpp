#include "Stream.hpp"
#include <iostream>
using namespace std;

Stream::Stream():
    m_n(-1)
{
}

Stream::~Stream(){

}

double Stream::Get() const {
    return m_n;
}

bool Stream::Set(){
    SetBase();
    return m_n >= 0;
}