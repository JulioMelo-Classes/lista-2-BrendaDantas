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
* @brief Two overloaded functions whose the first one receive a range and a pointer to another range and verify if all the elements of the beginning of the second range and the sum of the first element of the second range with the last element of the first range minus the first element of the first range. The second function receive two ranges and verify if all the elements of the first range are equal to all the elements of the second range.

 * @tparam InputIt iterator to the range.
 * @tparam Equal iterator to the function that verifies if two elements are equal to each others. .
 *
 * @param first1 and first1 pointers to the first element of the ranges.
 * @param last1 and last2 pointes to the positions just after the last elements of the ranges.
 *
 * @return true when they are equal and false when they aren't.

 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
  while (first1 != last1)
  {
    if (first1 > first2 || first1 < first2) 
    {
      break;
    }
    if (eq(*first1, *first2))
    {      
      return true;
    }
    return false;
    first1++;
    first2++; 
  }
}   

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
  while (first1 != last2)
  {
    if (first1 > first2 || first1 < first2) 
    {
      break;
    }
    if (eq(*first1, *first2))
    {
      return true;
    }
    return false;
    first1++;
    first2++;
  } 
}

}
#endif
