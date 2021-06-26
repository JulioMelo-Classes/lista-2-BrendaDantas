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
 * TODO: documentação no estilo doxygen
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
