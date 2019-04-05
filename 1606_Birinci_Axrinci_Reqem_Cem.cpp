#include <iostream>

using namespace std;

int main(){
	string a;
	cin >> a;
	if(a[0] == '-'){
		a[0] = a[1];
	}
	int sum = a[0] + a[a.size()-1] - '0' - '0';
	
	cout << sum << endl;
}
