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

template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{ 
  BidirIt iterator = first;
  for (BidirIt iterator2 = last-1; (iterator2-1) != first; iterator2--) 
  {
    std::iter_swap(iterator, iterator2);
    iterator++;
  }
}

}
#endif
