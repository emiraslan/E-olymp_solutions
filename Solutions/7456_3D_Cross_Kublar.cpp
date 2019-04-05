#include <iostream>
#include <math.h>

using namespace std;

int sum = 0;

int Cub_Calc(int n){
	if(n==0) return 0;
	sum += ((8 + (n-1)*4)*n)/2;
	cout << "Sum3 : " << sum << endl;
	sum += Cub_Calc(n-1);
	cout << "Sum4 : " << sum << endl;
}

int Base_Cub_Calc(int n){
	sum += ((8 + (n-1)*4)*n)/2;
	cout << "Sum1 : " << sum << endl;
	Cub_Calc(n-1);
	sum += 2*sum;
	cout << "Sum2 : " << sum << endl;
}

int main(){
	int n , k ;
	cin >> n;
	
	if(n == 1){
		cout << 1 << endl;
		return 0;
	}
	Base_Cub_Calc(n);
	
	cout << sum << endl;
}
