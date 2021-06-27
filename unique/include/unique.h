#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;
#include <vector>

namespace graal {

/*! 
 * @brief Function that receives a range and reorder this range in a way that the elements in this new order are unique. 

  * @tparam InputIt = iterator to the range.
  * @param Equal = function that compares if two elements are equal.
  * @param first = pointer that points to the first element of the range.
  * @param last = pointer that points to the position after the last element.
  * @param iterator2 = runs through the range.
  * @return iterator to the element just after the last element of the range after all this process.
 */
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
  InputIt iterator = first;
  InputIt iterator2 = first+1;

  while (iterator2 != last) 
  {
    if (eq(*iterator, *iterator2)) 
    {
      std::iter_swap(iterator2, iterator2+1);
      iterator2++;
    }

    else 
    {
      iterator2++;
    }
    
  }
    return iterator;
}

}
#endif
