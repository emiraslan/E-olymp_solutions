#include <iostream>

using namespace std;

int main(){
	long long int a, b, c, k, cavab;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	cin >> k;
	
	
	if((a*b*c)%k != 0) cavab = a*b*c/k + 1;
	else cavab = a*b*c/k;
	
	cout << cavab << endl;
}
