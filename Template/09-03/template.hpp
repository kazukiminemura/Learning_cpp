#ifndef TEMPLATE_H_
#define TEMPLATE_H_

// template should be seen from calling point.
// for example, all of template should be written in a single header file
template <typename TYPE>
  TYPE Abs(TYPE a)
{
  return a < 0 ? -a : a;
}

#endif