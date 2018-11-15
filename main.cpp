/*
 * Luis Fernández García
 *
 **/

#include <iostream>
#include <list>
#include "reto2.h"
#include "reto2.cpp"

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
