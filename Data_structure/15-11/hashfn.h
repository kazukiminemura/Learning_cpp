#ifndef HASHFN_H_
#define HASHFN_H_

#include <cstddef>

// default hash function
template <typename TYPE>
  class HashFn
{
public:
  static size_t Get(const TYPE& value);
  static const size_t SIZE = 23; // hash table
};

#endif // #ifndef HASHFN_H_