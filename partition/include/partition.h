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
 * @brief Function that receives a range and reorder this range in a way that the elements that satisfy the predicate come before the elements that doesn't.

  * @tparam ForwardIt = iterator to the range.
  * @param UnaryPredicate = iterator to the predicate.
  * @param first = pointer that points to the first element of the range.
  * @param last = pointer that points to the position after the last element.
  * @param p = verify the predicate.
  * @param iterator1 and iterator2 = runs trough the range verifying the predicate.
  * @return the iterator1 with the range in a new order.
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