#include <iostream>
#include <iomanip>
using namespace std;

double f(double x){
	return (x + 1.0/x);
}

int main(){
	long int n;
	
	cin >> n;
	double temp  , sum = 0;
	
	while(n--){
		cin >> temp;
		sum += f(temp); 
	}
	
	cout << fixed << setprecision(14) << sum << endl;
	system("pause");
}
