#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	unsigned long long int  a, b, c ,d , sum=0;
	
	cin >> a >> b>> c >> d;
	
	sum += a*b + c*d;
	
	sum = sqrt((double)sum);
	
	cout << sum << endl;
	return 0;
	
}
