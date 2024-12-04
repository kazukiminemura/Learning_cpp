#ifndef VALUEFACTORY_H_
#define VALUEFACTORY_H_

class Value;

class ValueFactory {
public:
  Value* New(int n) const;
};

#include "Value.h"

#endif // #ifdef VALUEFACTORY_H_