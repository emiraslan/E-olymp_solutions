#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double cavab[2] , a , b, c , k;
	cin >> a >> b >> k;
	
	cavab[0] = ceil(a/k);
	cavab[1] = ceil(b/k);
	
	cout << cavab[0]+cavab[1] << endl;
	return 0;
	
}
