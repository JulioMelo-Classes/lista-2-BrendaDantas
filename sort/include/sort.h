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
* @brief Function that receives a range and reorder this range using a function passed by parameter to compare two elements of a range.

 * @tparam ForwardIt  iterator to the range.
 * @tparam Comparison iterator to the function cmp that compares two elements of the range.
 *
 * @param first pointer to the first element of the range.
 * @param last pointe to the position just after the last element of the range.
 * @param iterator1 and iterator2 run through the range.
 */
 /*
 blz
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{  
  for(ForwardIt iterator = first; iterator != last; iterator++)
  {
    for(ForwardIt iterator2 = iterator; iterator2 != last; iterator2++)
    {
      if(cmp(*iterator2,*iterator))
      {
        std::iter_swap(iterator,iterator2);
      }
    }
  }
}

}

#endif