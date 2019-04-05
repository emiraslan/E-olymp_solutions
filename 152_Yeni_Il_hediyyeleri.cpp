#include <iostream>
using namespace std;

typedef long long int lli;

int main(){
	lli a, b, n;
	cin >>n;
	if(n%2 == 0){
		if((n/2)%2 == 0){
			cout << (n-1)*n/4.0 << endl;
			return 0;
		}else{
			cout << "-1" << endl;
			return 0;
		}
	}else{
		if(((n-1)/2)%2 == 0){
			cout << (n-1)*n/4.0 << endl;
			return 0;
		}else{
			cout << (n+1)*n/4.0 <<endl;
			return 0;
		}
	}
	
	return 0;
}
