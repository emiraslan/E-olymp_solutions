#include <iostream>

using namespace std;

typedef unsigned long long int ulli;

ulli gcd(ulli a, ulli b){
	return (!b) ? a : gcd(b, a%b);
}

int main(){
	ulli a, b;
	cin >> a >> b;
	cout << (a*b)/gcd(a,b) << endl;
	
}
