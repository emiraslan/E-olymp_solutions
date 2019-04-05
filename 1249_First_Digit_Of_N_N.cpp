#include <iostream>
#include <algorithm>
#include <sstream>
#include <utility>
#include <math.h>
using namespace std;

int main()
{
	long long int b, l , k;
	long long int sum;
	long double smth , a;
	
	while(cin >> a){		
		smth = a*log10(a)+ a - 1 - l*1.0;
		k = pow(10, smth);
		
		smth = a*log10(a);
		k = smth;
		smth = smth - k;
		//cout << "Aha : " << smth << endl;
		
		smth = pow(10 , smth);
		//cout << "Buyur : " << smth << endl;
		stringstream ss;
		ss << smth;
		string str = ss.str();
		cout << str[0] << endl;
	}
}
