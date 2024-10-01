#ifndef ARRAYSTREAM_H_
#define ARRAYSTREAM_H_

#include "Stream.hpp"

class ArrayStream:
    public Stream
{
public:
    ArrayStream(const double* array, int size);
    ~ArrayStream();
    
protected:
    virtual void SetBase();

private:
    double* m_array;
    int m_i;
};

#endif // #ifndef ARRAYSTREAM_H_