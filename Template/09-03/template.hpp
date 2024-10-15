#ifndef TEMPLATE_H_
#define TEMPLATE_H_

template <typename TYPE>
  TYPE Abs(TYPE a)
{
  return a < 0 ? -a : a;
}

#endif