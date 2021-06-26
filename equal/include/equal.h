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
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
  InputIt2 iterator2 = first2;
  InputIt1 iterator1 = first1;
  
  while (iterator1 != last1)
  {
    if (!eq(*iterator1, *iterator2))
    {      
      return true;
      iterator1++;
      iterator2++;
    }
  }
  return false;    
}   

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
  InputIt1 iterator1 = first1;
  InputIt2 iterator2 = first2;

  while (iterator1 != last1)
  {
    if (eq(*iterator1, *iterator2))
    {
      return true;
      iterator1++;
      iterator2++;
    }
    
  }
  return false;
}

}
#endif
