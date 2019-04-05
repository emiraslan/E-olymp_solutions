#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a, qaliq, cavab, b, c,d;
	
	cin >> a;
	if(a < 0)
	a = -1*a;
	cout << (a%10)*((a/10)%10)*(a/100) - ( (a%10) + ((a/10)%10) + (a/100) ) << endl;
	
	system("pause");
}
