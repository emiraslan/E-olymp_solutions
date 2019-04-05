#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	long double a, b;
	cin >> n;  
	while(n--){
		cin >> a >> b;
		cout << fixed << setprecision(4) << a+b << " " << a*b << endl;
	}
}
