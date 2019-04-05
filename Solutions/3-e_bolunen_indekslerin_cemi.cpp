#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

main()
{
	int a , b, c ,d,say=0;
	cin >> a ;
	float arr[a],  cem=0;
	for (int i=0; i<a; i++ )
	{
		cin >> arr[i];
		c=fabs(i+1);
		if(c%3==0 && arr[i]>0)
		{
			cem+=arr[i];
			say++;
		}
	}
	cout << say <<" "<<fixed<<setprecision(2)<<cem <<endl;;

	
}
