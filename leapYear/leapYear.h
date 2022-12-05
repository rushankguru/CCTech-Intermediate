#include <iostream>
using namespace std;


int isLeapyear(int year)
{

  
  if (year>0)
  {
    

    // cout << "Enter a year: ";
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
      return true;
    }
    else {
      return false;
    }
  }
  else
  {
    return false;
  }

}