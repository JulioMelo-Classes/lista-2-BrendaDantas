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

  bool cmp(const std::string &a, const std::string &b)
  {
    return (a < b);
  }

  template <typename Itr, typename Compare >
  std::pair<Itr, Itr> minmax(Itr first, Itr last, Compare cmp)
  {  
    auto max = *first;
    auto min = *last;

    for (Itr i = first; i != last; i++)
    {
      if (i == 0) 
      {
        return std::make_pair(first, first);
      }

      else 

        cmp(*first, *last);
      
      return(max, min);

    }
  }
}
#endif