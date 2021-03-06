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
* @brief Function that copies a range values into a new range that begins in d_first.
 *
 * @tparam InputIt = iterator to the range.
 *
 * @param first pointer to the first element of the range.
 * @param last pointer to the position just after the last element of the range.
 * @param d_first pointer to the addres just after the last element of the range.
 *
 * @return iterator to the new range.
 */
 /*
 ok
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
  while (first != last)
  {
    *d_first = *first;
    d_first++;
    first++;
  }
    return d_first; //indentação!
}

}
#endif
