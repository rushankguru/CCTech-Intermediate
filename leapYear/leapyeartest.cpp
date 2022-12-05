#include <iostream>
#include <cassert>
#include "leapYear.h"
using namespace std;


int main()
{
    assert(isLeapyear(2016));
    assert(!isLeapyear(2018));
    assert(isLeapyear(2000));
    assert(!isLeapyear(2021));
    assert(!isLeapyear(0));
    cout<<"All test cases passed"<<endl;
}