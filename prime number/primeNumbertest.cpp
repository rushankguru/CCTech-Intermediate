#include <iostream>
#include <cassert>
#include "primeNumber.h"
using namespace std;

int main(void)
{
   assert(isPrime(7));
   assert(!isPrime(6));
   assert(!isPrime(0));
   assert(!isPrime(100));
   cout<<"All test cases passed"<<endl;
}
