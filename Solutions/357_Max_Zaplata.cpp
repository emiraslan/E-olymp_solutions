#include <iostream>
#include <iomanip>
using namespace std;

typedef long double lli;

int main(){
	lli a ,b;
	cin >> a;
	while(cin >> b){
		if(a < b){
			a = b;
		}
	}
	
	cout << fixed << setprecision(2) << a << endl;
}
