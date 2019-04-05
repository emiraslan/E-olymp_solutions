#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

typedef unsigned long long int ulli;
 
ulli sum = 0;

bool ikidirmi(ulli a)
{
	if(a%2 == 0 && a/2 != 1)
	{
		return ikidirmi(a/2);
	}else if(a%2 == 0 && a/2==1){
		return 1;
	}else{
		return 0;
	}
}

ulli gcd( ulli a , ulli b)
{
	return (b == 0) ? a : gcd(b,a%b);
}

void calc(ulli a,  ulli i)
{
	while(1)
	{
		if(a == i)
		{
			return;
		}
		else if(a > i)
		{
			sum ++;
			a = 2*a-i*2;
			continue;
		}
		sum ++;
		a = a*2;
	}
}

int main()
{
	ulli a , b , c, d;
	
	while(cin >> a >> b)
	{
		sum = 0;
		if(a ==0 || b == 0){
			cout << "0" << endl;
			continue;
		}
		if((a+b)%2 != 0 || (a%b == 0 && a/b == 2) || (b%a == 0 && b/a == 2))
		{
			cout << "-1" << endl;
			continue;
		}
		if(a == b){
			cout << "1" << endl;
			continue;
		}
		if((a%b == 0 && a/b == 3) || (b%a == 0 && b/a == 3))
		{
			cout << 2 << endl;
			continue;
		}
		
		c = (((a+b)/2 - b) < 0) ? ((a+b)/2 - b)*(-1) : ((a+b)/2 - b);
		if(c < gcd(a , b)){
			cout << "-1" << endl;
			continue;
		} 
		else{
			c = gcd(a ,b);
			a = a/c;
			b = b/c;
			if( ikidirmi(a+b) ){
				calc(min(a,b) , (a+b)/2);
				cout << 1+sum <<endl;
			}else{	
				cout << "-1" << endl;
				continue;
			}
		}
		
	}
	
}
