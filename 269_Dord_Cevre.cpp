#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double Su , P , t ,x;
	double r1 , r2 , r3;
	cin >> r1 >> r2 >> r3;
	
	P = r1+r3+r2;
	Su = sqrt(P*r1*r2*r3);
	t = Su/(r2+r1+r3);
	cout << "Su : " << Su << endl;
	x= -1*r2 + sqrt(r2*r2 + t*t);
	cout << x << endl;
	system("pause");
	return 0;
}
