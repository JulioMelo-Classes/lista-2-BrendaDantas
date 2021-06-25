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
  BidirIt iterator2 = last-1;
  while (iterator != iterator2)
  {
    std::iter_swap(iterator, iterator2);
    iterator++;
  }
}

}
#endif
