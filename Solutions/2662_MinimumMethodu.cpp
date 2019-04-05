#include <stdio.h>
#include <iostream>
using namespace std;




int main()
{
   int array[1001], n, c, d , count = 0, position, swap;
   int birinci_element = 0;
   cin  >> n;

   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
 
   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;
 
      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != c )
      {
      	if(c == birinci_element){
      		birinci_element = position;
      		count ++;
		}
		else if(position == birinci_element)
		{
			birinci_element = c;
      		count ++;
		}
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
   }
	 cout << count << endl;
 
   return 0;
}
