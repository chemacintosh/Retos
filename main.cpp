/*
 * Luis Fernández García
 * Jose María Ruiz Gómez
 **/

#include <iostream>
#include <list>
#include "reto3.h"
#include "reto3.cpp"

using namespace std;

int main(int args, char **argv)
{
   int n = 1;

   BonelessStack<int> BS(n);

   cout << BS.top() << endl;
   BS.push(3);
   cout << BS.top() << endl;
   BS.pop();
   cout << BS.top() << endl;


   return(0);
}
