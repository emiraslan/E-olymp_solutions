#include <iostream>

using namespace std;

long long int  gcd(long long int a, long long int b){
	return (!b) ? a : gcd(b, a%b);
}

int main(){
	std::ios_base::sync_with_stdio(false);
	long long int a,  b;
	cin >> a >> b ;
	cout << gcd(a, b)<<endl;
	system("pause");
}
