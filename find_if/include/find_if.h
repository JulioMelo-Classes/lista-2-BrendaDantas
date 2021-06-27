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
* @brief Function that receives a range verify if each element of the range satisfy a predicate.
 *
 * @tparam InputIt  iterator to the range.
 * @tparam UnaryPredicate iterator to the predicate.
 *
 * @param first pointer to the first element of the range.
 * @param last pointer to the position just after the last element of the range.
 *
 * @return iterator to the first element that satisfy the predicate and if all the elements in the range doesn't satisfy the predicate, return last.

 */ 
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
  
  for (InputIt iterator = first; iterator != last; iterator++)
  {
    if (p(*iterator))
    {
      return iterator;
    }
  }

  return last;
}
}
#endif
