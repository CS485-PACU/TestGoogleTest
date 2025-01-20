#include <iostream>
#include "../include/SampleClass.h"

/*******************************************************************************
 Function:    factorial

 Description: The factorial of a number is defined using the following formula
              n! = n * (n - 1) * (n - 2) * ... * 1
              The factorial of 0 is defined to be 1.
              The factorial of a negative number is undefined and will return -1

 Parameters:  anInt - The number to calculate the factorial of

 Returned:    The factorial of the number
*******************************************************************************/
unsigned int SampleClass::factorial (unsigned int uInt) {
  unsigned int result = 1;

  for (int i = uInt; i >= 2; i--) {
    result *= i;
  }

  return result;
}