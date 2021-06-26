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
#endif#ifndef GRAAL_H
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