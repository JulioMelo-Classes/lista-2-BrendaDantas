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
   ForwardIt auxiliar = first; 
   ForwardIt auxiliar2 = first;
   ForwardIt auxiliar3 = first;
   ForwardIt iterator = first+1;
   ForwardIt guardar_n_first = n_first;
   ForwardIt guardar_n_first_anterior = n_first-1;

   while (*first != *guardar_n_first) 
   {
     auxiliar2 = auxiliar3;
     auxiliar3 = iterator;
     auxiliar3++;
     iterator++;     

     if (iterator == (last-1)) 
     {
       auxiliar3 = iterator;
       iterator = auxiliar2;
       iterator = first+1;  
       auxiliar3 = first;     
       auxiliar = auxiliar3;
     }
   }
   //return guardar_n_first_anterior;
}

}
#endif
