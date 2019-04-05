#include <iostream>
#include <math.h>
using namespace std;

typedef unsigned long long int ulli;

int main()
{
	ulli a , sum = 0, count = 0;
	cin >>a;
	
	
	while(a != 0)
	{
		sum += ((ulli)pow(2 , count) * (ulli)(a%10));
		count ++;
		a = a/10;
	}
	
	cout << sum << endl;	
	system("pause");
	
	return 0;
}
