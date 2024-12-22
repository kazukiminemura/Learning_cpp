#ifndef HASH_H_
#define HASH_H_

#include "hashfn.h"
#include <map>
#include <stdexcept>

template <
  typename KEY,     // key type
  typename VALUE,   // value type
  typename HASH_FN = HashFn<KEY> // hash function
>
  class Hash
{
public:
  typedef std::map<KEY, VALUE> Map;
  typedef typename Map::const_iterator CIterator;

public:
  // get value mapped to key
  VALUE& operator[] (const KEY& key){
    size_t hashValue = HASH_FN::Get(key); //hash value
    return m_hashTable[hashValue][key];
  }

  // get value corresponding to key
  // if not find, then throw out_of_range
  const VALUE& operator[] (const KEY& key) const {
    size_t hashValue = HASH_FN::Get(key); // hash value
    const Map& map = m_hashTable[hashValue];
    CIterator it = map.find(key);
    if(it == map.end()){
      throw std::out_of_range("could not find the key");
    }
    return it->second;
  }

private:
  Map m_hashTable[HASH_FN::SIZE]; // hash table
};

#endif // #ifndef HASH_H_