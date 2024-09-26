#ifndef STREAM_H_
#define STREAM_H_

// A class to get greater than zero
class Stream {
public:
    double Get() const;
    virtual bool Set(); // add virtual for override functions

protected:
    double m_n;
};

#endif // #ifndef STREAM_H_