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
 * @brief Function that reverses the order of each element in a range.

  * @tparam BidirIt = iterator to the range.
  * @param UnaryPredicate = iterator to the predicate.
  * @param first = pointer that points to the first element of the range.
  * @param last = pointer that points to the position after the last element.
  * @param tamanho_range = verifies the size of the range.
  * @param tam = divides the size of the range in two.
  * @param iterator3 = runs through the range.
  * @param cont = run through tam.
  * @param iterator1 = runs through the range beginning in first.
  * @param iterator2 = runs through the range beginning in the element of the range.
 */

template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{ 
  BidirIt iterator = first;
  BidirIt iterator2 = last-1;
  int tamanho_range = 0;

  for (BidirIt iterator3 = first; iterator3 != last; iterator3++) 
  {
    tamanho_range++;
  }

  int tam = tamanho_range/2;

  for (int cont = 0; cont < tam; cont++)
  {
    std::iter_swap(iterator, iterator2);
    iterator++;
    iterator2--;
  }
}

}
#endif