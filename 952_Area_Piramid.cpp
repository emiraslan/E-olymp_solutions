#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	double a, h , surf;
	cin >> a >> h;
	cout << fixed << setprecision(1) << (double)(2*sqrt(h*h + a*a/4)*a) + (double)(a*a) << "\n";
	system("pause");
}
