#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	long long int t1,t2,t3;
	double a;
	cin >> t1 >> t2 >> t3 ;
	a = 1.0/(1.0/t1+1.0/t2+1.0/t3) ;
	cout << fixed << setprecision(2) << a << endl;

}
