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
  for (ForwardIt iterator = first ; iterator != last; iterator++) 
  {
    if (p(*iterator))
    { 
      iterator = iterator-1;
      return last;
    }
  }
}

}
#endif
