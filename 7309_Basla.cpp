#include <iostream>
#include <vector>
using namespace std;

typedef long long int lli;
#define foreach( i , x ) for(int i = 0 ; i < (x) ; i ++)

bool bol2(lli a ) {
	if (a == 1) {
		return true;
	}
	
	return ( a%2 == 0 ) ? bol2(a / 2) : false;
}

void display(vector<lli> &arr) {
	foreach(i , arr.size()) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

lli gcd(lli a , lli b) {
	return (b == 0) ? a : gcd(b, a%b);
}

int main() {
	lli a , n,  ebob = 1;
	cin >> n;

	vector<lli> arr(n);
	cin >> arr[0];
	ebob = arr[0];
	for (int i = 1; i < n; i++) {
		cin >> arr[i];
		ebob = gcd(arr[i], ebob);
	}
	
	for(int i = 0; i < n; i++) {
		arr[i] = arr[i]/ebob;
		if (bol2(arr[i]) == false) {
			cout << "NO" << endl;
			system("pause");
			return 0;
		}
	}

	cout << "YES" << endl;
	system("pause");
	return 0;

}