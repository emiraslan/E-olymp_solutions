#include <iostream>
using namespace std;

typedef unsigned long long int ulli;

int main(){
	ulli a , b, x ,y;
	cin >> a >> b >> x >> y;
	int arr[a+2][b+2];
	if(x-1>0)
	cout << x-1 << " " << y << endl;
	if(y-1>0)
	cout << x << " " << y-1 << endl;
	if(y+1<=b)
	cout << x << " " << y+1 << endl;
	if(x+1<=a)
	cout << x+1 << " " << y << endl;
	
}
