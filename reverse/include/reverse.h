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
  *@brief Function that reverses the order of each element in a range.
  *
  * @tparam BidirIt iterator to the range.
  *
  * @param first pointer to the first element of the range.
  * @param last pointer to the position just after the last element of the range.
  *
 */
/*
ok
*/
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{ 
  BidirIt iterator = first;
  BidirIt iterator2 = last-1;
  int tamanho_range = 0;
  //vc pode descobrir o tamanho do range fazendo a diferença entre os iterators
  //tamanho_range = last - first
  for (BidirIt iterator3 = first; iterator3 != last; iterator3++)  
  {
    tamanho_range++;
  }

  int tam = tamanho_range/2;

  for (int cont = 0; cont < tam; cont++)
  {
    std::iter_swap(iterator, iterator2);
    iterator++;
    iterator2--;
  }
}

}
#endif