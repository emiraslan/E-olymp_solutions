#include <iostream>
#include <math.h>
using namespace std;

typedef unsigned long long int lli;

int main(){
	lli a;
	cin >> a;
	
	if(a <= 3){
		cout << (lli)(pow(a+1, 2)) << endl;
		return 0;
	}
	
	cout << (lli)(pow(a+1, 2)) << endl;
	return 0;
	
}
