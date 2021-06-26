#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{ 
  ForwardIt iterator1= first;
  ForwardIt iterator2 = first;

  while (iterator2 != last) 
  {
    if (p(*iterator2))
    {
      std::iter_swap(iterator1, iterator2);
      iterator1++;
      iterator2++;
    }
    else 
    {
      iterator2++;
    }
  }

  return iterator1;
  }
}
#endif