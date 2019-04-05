#include <iostream>

using namespace std;

typedef long long int lli;

lli gcd(lli a, lli b){
	return (!b) ? a : gcd(b, a%b);
}

int main(){
	lli m, n,ebob;
	bool flag = false;
	cin >> m >> n;
	if (m == n){
		cout << 0 << " " << 3 << endl;
		return 0;
	}
	if (m < n){
		flag = true;
		int c = m;
		m = n;
		n = c;
	}
	ebob = gcd(m, n);
	m = m / ebob;
	n = n / ebob;
	if (m % 2 == 1 && n % 2 == 0){
		cout << n - 1 + m - 1 << " ";
		if (flag){
			cout << 2 << endl;
		}
		else{
			cout << 4 << endl;
		}
	}
	else if (m % 2 == 1 && n % 2 == 1){
		cout << n - 1 + m - 1 << " ";
			cout << 3 << endl;
	}
	else if (m % 2 == 0 && n % 2 == 1){
		cout << n - 1 + m - 1 << " ";
		if (flag){
			cout << 4 << endl;
		}
		else{
			cout << 2 << endl;
		}
	}
	//cout << m << "  " << n << endl;
	system("pause");
}
