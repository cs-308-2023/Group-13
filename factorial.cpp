#include "functions.h"
#include <iostream>

int factorial(int n)
{
  if(n<1) 
    {
      std::cout<<"Incorrect Input \n Please re enter the number \n";
    }
  if(n!=1)
    {
return(n * factorial(n-1));
    }
  else return 1;
}
