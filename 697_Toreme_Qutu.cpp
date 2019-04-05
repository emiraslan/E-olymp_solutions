#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a;
	int n;
	cin >> n;
	while(n--){
		cin >>a ;
		cout << fixed << setprecision(10) << a/6 << endl;
	}
}
