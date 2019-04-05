#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double a , b ,r, x ,y;
	
	cin >> a >> b >>r;
	cin >> x >> y;
	
	double mes = sqrt(pow(a-x,2) + pow(b-y,2));
	if(mes <= r){
		cout << "YES" <<endl;
	} else{
		cout << "NO" <<endl;
	}
	
	return 0;
}
