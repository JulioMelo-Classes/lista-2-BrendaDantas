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
 * @brief Function that finds and returns the first occurrence of the minor and the greater elements in the range.
 *
 * @tparam Itr iterator to the range.
 * @tparam Compare type of a boolean function that compares two elements.
 *
 * @param first pointer to the first element of the range.
 * @param last pointer to the position just after the last element of the range.
 * @param cmp function of comparison that returns true when the first parameter is minor than the second one.
 *
 * @return a std::pair that contains the minor and greater element, in this order. 
 *
 */

template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax(Itr first, Itr last, Compare cmp)
{  
    Itr maior_elemento = first;
    Itr menor_elemento = first;
    int maior_quantidade = 0, menor_quantidade = 1;
    int quantidade_maior = 0, quantidade_menor = 0;
  
  for (Itr it = first; it != last; it++) 
  {        
    for (Itr it2 = first; it2 != last; it2++) 
    {
      if (cmp(*it2 , *it) && it != it2) // verificando quantos elementos são menores que it
      {               
        quantidade_menor++;          
      }
      if (cmp(*it , *it2) && it != it2) // verificando quantos elementos são maiores que it
      {
        quantidade_maior++;
      }
    }

    if (quantidade_maior <= maior_quantidade)
    {
      maior_quantidade = quantidade_maior;
      maior_elemento = it;
    } 

    quantidade_maior = 0; 

    if (quantidade_menor < menor_quantidade) 
    { 
      menor_quantidade = quantidade_menor;
      menor_elemento = it;
    }
    
    quantidade_menor = 0;
    
  }  
  return std::make_pair(menor_elemento, maior_elemento);
}
}

#endif