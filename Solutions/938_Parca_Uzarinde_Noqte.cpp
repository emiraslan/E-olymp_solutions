#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double x, y, a, b, c, d, alfa;
	cin >> a >> b >> c >> d >> alfa;
	
	x = (alfa*c + a)/(1+alfa);
	y = (alfa*d + b)/(1+alfa);
	
	cout <<fixed << setprecision(2) << x << " " << y << endl;
	
	system("pause");
	
	
	
}
