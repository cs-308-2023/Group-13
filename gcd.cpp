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

int rec (int a, int b, int c)
{
  if (a%c == 0 && b%c == 0)
    return c;
  else
    return rec (a, b, c);
}

int GCDrec (int a, int b)
{
  if(a<b)
    return rec (a, b, a);
  else
    return rec (a, b, b);
}
