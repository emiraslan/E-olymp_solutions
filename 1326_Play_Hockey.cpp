#include<iostream>

using namespace std;

typedef unsigned long long int ulli;

ulli fact(ulli a){
	ulli b = a-3 , hasil=1;
	while(a != b){
		hasil *= a;
		a--;
	}
	return hasil;
}

int main(){
	ulli a , b, c;
	cin >> a;
	if(a == 1){
		cout << 3 << endl;
		return 0;
	}if(a == 2){
		cout << 6 << endl;
		return 0;
	}
	cout << fact(a) << endl;
}
