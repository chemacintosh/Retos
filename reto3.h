#ifndef _RETO3_
#define _RETO3_

#include <iostream>
#include <list>
#include <cmath>

using namespace std;



template<class T>
class BonelessStack {
private:

   list<T> milista;

public:

   BonelessStack();

   BonelessStack(const T n);

   ~BonelessStack();

   /*
    * @brief Devuelve true si la pila esta vacia (size=0)
    **/
   bool empty();

   /*
    * @brief
    **/
   int size();

   /*
    * @brief
    **/
   T& top();

   /*
    * @brief
    **/
   void push(T n);

   /*
    * @brief
    **/
   void emplace(T obj);

   /*
    * @brief
    **/
   void pop();

   /*
    * @brief
    **/
   void swap(list<T> x);
};
#endif
