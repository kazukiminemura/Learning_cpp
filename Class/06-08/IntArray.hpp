#ifndef INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_
#define INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_

class IntArray {
  public:
    IntArray(int size);
    ~IntArray();
    IntArray(const IntArray& other); // copy constructor

  public:
    int Get(int i);
    void Set(int i, int value);
    int Size();

  private:
    void CheckIndex(int i);

  private:
    int* m_array;
    int m_size;
};
#endif // INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_