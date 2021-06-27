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
 * TODO: documentação no estilo doxygen
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
