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

  * @tparam InputIt = iterator to the range.
  * @param first = pointer that points to the first element of the range.
  * @param last = pointer that points to the position after the last element.
  * @param value = a value that is received by parameter.
  * @param Equal = function that verify if two elements are equal to each others.
  * @return iterator if two values are equal, and return last if they are not equal.
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
