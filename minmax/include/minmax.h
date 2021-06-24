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
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */

template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax(Itr first, Itr last, Compare cmp)
{  

    Itr menor_elemento = first; // eu sempre uso o conteúdo do menor_elemento
    Itr maior_elemento = first;

  if (first == last) 
  {
    return std::make_pair(first, first);
  }    

  if (*first == *(last-1))
  {
    for (auto itr2 = first; itr2 != last; itr2++) 
    {
      if (*itr2 == *(last-1))
        {  
          itr2++;          
          return std::make_pair(first, (last-1));
        }
    }
  }
  
  for (auto it = first; it != last; it++) 
  {        
    if (cmp(*it, *menor_elemento)) //*it < *menor_elemento
    //if(cmp(*menor_elemento, *it)) -  *menor_elemento < *it
    {
      menor_elemento = it;
    }

    if (cmp(*menor_elemento, *it)) 
    {
      maior_elemento = it;
    }
  }
  return std::make_pair(menor_elemento, maior_elemento);
}
}

#endif