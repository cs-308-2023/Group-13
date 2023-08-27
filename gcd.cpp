#include <iostream>

int findgcd (int a, int b)
{
  int ans = 1;
  int roof;

  if(a<b)
    roof = a;
  else
    roof = b;
    
  for (int i=2; i<roof; i++)
  {
    if(a%i == 0 && b%i == 0)
      ans = i;
  }
  
  return ans;
}
