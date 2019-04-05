#include <stdio.h>
 
int main()
{
  long long int array[10000], n, c, d, swap;
    long long int say = 0;
  
  scanf("%lld", &n);
 
  for (c = 0; c < n; c++)
    scanf("%lld", &array[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
      	say ++;
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 

     printf("%lld\n", say);
  return 0;
}
