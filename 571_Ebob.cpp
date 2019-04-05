#include <iostream>
using namespace std;

typedef long long lli; 

lli gcd(lli a, lli b){
	return (!b) ? a :gcd(b, a%b);
}

int main(){
	lli ebob,a,n, temp;
	cin >> n;
	cin >>temp ;
	ebob = temp;
	n--;
	while(n--){
		cin >> temp;
		ebob = gcd(ebob, temp);
	}
	cout << ebob << endl;
}
