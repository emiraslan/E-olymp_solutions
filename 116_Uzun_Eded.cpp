#include<iostream>
#include<math.h>
#include <string>
#include <sstream>
using namespace std;


int say(unsigned long long int a){
	int  count = 0;
	while(a!= 0){
		a/=10;
		count ++;
	}
	return count;
}

int main()
{
	unsigned long long int a , b, c;
	int reqem_say;
	bool say_tap = false;
	cin >> a >> c;
	b=a;
	reqem_say = say(b);
	while(a%c != 0){
		b++;
		
		reqem_say = say(b);
		
		a = (a%c)*pow(10, reqem_say) + b;
		
	}
	cout <<  b << endl;
	
}
