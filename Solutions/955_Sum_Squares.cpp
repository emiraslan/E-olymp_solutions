#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a;
	int n;
	cin >> n;
	int a1 = n%10;
	int a2 = (n%100)/10;
	int a3 = (n/100)%10;
	int a4 = (n/1000);
	int  cavab = (a1 + a2 + a3 + a4)*(a1 + a2 + a3 + a4);
	
	cout << cavab << endl;
}
