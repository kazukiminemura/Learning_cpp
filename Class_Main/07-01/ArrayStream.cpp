#include "ArrayStream.hpp"

ArrayStream::ArrayStream(const double* array){
    m_array = array;
    m_i = 0;
}

// set new value
bool ArrayStream::Set(){
    m_n = m_array[m_i];
    if(m_n >= 0){
        ++m_i;
        return true;
    } else {
        return false;
    }
}