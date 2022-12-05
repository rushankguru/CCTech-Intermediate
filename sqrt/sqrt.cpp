#include <iostream>
#include <cassert>
#include "sqrt.h"
using namespace std;

int main()
{
    assert(sqrt1(4)==2);
    assert(sqrt1(-1));
    assert(sqrt1(1)==1);
    assert(sqrt1(9)==3);
    cout<<"All tets cases passed"<<endl;
}