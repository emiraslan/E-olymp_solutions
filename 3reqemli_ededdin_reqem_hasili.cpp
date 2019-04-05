#include <iostream>

using namespace std;

main()
{
	long long int a, b,a1,a2,a3;
	cin >> a;
	a1=(a/100);
	a2=((a-100*a1)-a%10)/10;
	a3=a%10;
	cout << a1*a2*a3<<endl;
	
}
