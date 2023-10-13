#include "variadic_functions.h"
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
  int res = 0;
  unsigned int i;
  
  if (n == 0)
    return (0);
  va_list ptr;
  va_start(ptr,n);
  for (i=0;i<n;++i)
    {
      res += va_arg(prt;int);
    }
  va_end(ptr);
  return (res);
}
