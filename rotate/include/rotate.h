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
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{
  ForwardIt iterator2 = first;
  ForwardIt iterator4;
  ForwardIt aux2 = first;
  ForwardIt valor_n_first = n_first;
  ForwardIt valor_n_first_menos_um = n_first-1;

  while (*first != *valor_n_first && *(last-1) != (*valor_n_first_menos_um)) 
  {
    ForwardIt aux = first;
    for (ForwardIt iterator = first; iterator != last; iterator++) 
    {      
      iterator2 = iterator2+1;
      iterator2++;
    }
    iterator2 = first;
    *(last-1) = *aux;
  } 

  for (ForwardIt iterator3 = first; iterator3 != last; iterator3++)
  {
    if (*iterator3 == *aux2) {
      iterator4 = iterator3;
    }
  }

  return iterator4;
}

}
#endif
