#include <iostream>
#include <list>
#include <cmath>
#include "reto3.h"

using namespace std;
template<class T>
BonelessStack<T>::BonelessStack()
{
   milista = NULL;
}


template<class T>
BonelessStack<T>::BonelessStack(T n)
{
   milista.push_front(n);
}


template<class T>
bool BonelessStack<T>::empty()
{
   return milista.empty();
}

template <class T>
BonelessStack<T>::~BonelessStack()
{
   milista.clear();
}

template<class T>
int BonelessStack<T>::size()
{
   return(milista.size());       // SI NO FUNCIONA ES
}                                // POR ESTO ASI Q LO BORRAS


template<class T>
T& BonelessStack<T>::top()
{
   return milista.back();
}


template<class T>
void BonelessStack<T>::push(T n)
{
   milista.push_back(n);
}


template<class T>
void BonelessStack<T>::emplace(T obj)
{
   milista.emplace_front(obj);
}


template<class T>
void BonelessStack<T>::pop()
{
   milista.pop_back();
}


template<class T>
void BonelessStack<T>::swap(list<T> x)
{
   // swap de List:
   milista.swap(x);   // recibe otra lista e intercambia la de la funcion por la recibida
                      // milista(otralista) => milista = otralista \ otralista = milista
}
