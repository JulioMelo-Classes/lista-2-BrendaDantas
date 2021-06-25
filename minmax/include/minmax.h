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
    Itr maior_elemento = first;
    Itr menor_elemento = first;
    int maior_quantidade = 0;
    int menor_quantidade = 1;
    int quantidade_maior = 0;
    int quantidade_menor = 0;  
  
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