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
* @brief Function that receives a range, a value and returns an iterator to the first element on the range that is equal to the value received.
 *
 * @tparam InputIt  iterator to the range.
 * @tparam Equal type of a function that verifies if two      elements are equal to each others.
 *
 * @param first pointer to the first element of the range.
 * @param last pointer to the position just after the last element of the range.
 * @param value is a value that is received by parameter.
 *
 * @return iterator if two elements are equal or return last if they are not equal.

 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
  for (InputIt iterator = first; iterator != last; iterator++)
  {
    if (eq(*iterator, value))
    {
      return iterator;
    }
  }    
    return last;
}

}
#endif
