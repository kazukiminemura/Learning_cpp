#ifndef INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_
#define INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_

class IntArray {
  public:
    IntArray(int size);
    ~IntArray();
    IntArray(const IntArray& other); // copy constructor
    // = overload 
    void operator=(const IntArray& other);

  public:
    int Get(int i) const;
    void Set(int i, int value);
    int Size() const;

  private:
    void CheckIndex(int i) const;

  private:
    int* m_array;
    int m_size;
    
};
#endif // INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_