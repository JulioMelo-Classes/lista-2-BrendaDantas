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
  * @brief Function that receive a range and a predicate and verify if the predicate is being satisfied for all the elements.

  * @tparam InputIt = iterator to the range.
  * @tparam UnaryPredicate = iterator to the predicate.
  * @param first = pointer that points to the first element of the range.
  * @param last = pointer that points to the position after the last element.
  * @param iterator = iterator that runs through all the elements of the range.
  * @return true when the predicate is satisfied and false when this doesn't happens.
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
  for (InputIt iterator = first; iterator != last; iterator++) 
  {
    if (p(*iterator)) 
    {
      return true;
    }
  return false;
  } 
 
}

/*! 
 * @brief Function that receive a range and a predicate and verify if the predicate it's being satisfied for at least one element of the range.

  * @tparam InputIt = iterator to the range.
  * @tparam UnaryPredicate = iterator to the predicate.
  * @param first = pointer that points to the first element of the range.
  * @param last = pointer that points to the position after the last element.
  * @param iterator = iterator that runs through all the elements of the range.
  * @return true when the predicate is satisfied and false when this doesn't happens.
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    for (InputIt iterator = first; iterator != last; iterator++) 
    {
      if (p(*iterator))
      {
        return true;
      }
    }
    return false;
}

/*! 
 * @brief Function that receive a range and a predicate and verify if the predicate it it not being satisfied for all the elements of the range.

  * @tparam InputIt = iterator to the range.
  * @tparam UnaryPredicate = iterator to the predicate.
  * @param first = pointer that points to the first element of the range.
  * @param last = pointer that points to the position after the last element.
  * @param iterator = iterator that runs through all the elements of the range.
  * @return false when the predicate is being satisfied and true if it's not.
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
  for (InputIt iterator = first; iterator != last; iterator++) 
  {
    if (p(*iterator)) 
    {
      return false;
    }
  }
  return true;
}

}
#endif
