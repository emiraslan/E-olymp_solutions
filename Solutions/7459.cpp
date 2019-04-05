#include <iostream>
#include <math.h>
using namespace std;

typedef unsigned long long int ulli;

int main()
{
	string a;
	ulli sum = 1;
	cin >>a;
	
	for(int i = 0 ; i < a.size() ; i+=2)
	{
		if(a[i] == '-')
		{
			i++;
		}
		sum *= (a[i] - '0');
		
	//	cout << i << " ";
	}
	
	cout << sum << endl;	
	system("pause");
	
	return 0;
}
