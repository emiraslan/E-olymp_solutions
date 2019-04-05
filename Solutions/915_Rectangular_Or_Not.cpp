#include <iostream>
#include <math.h>
using namespace std;

int min1(int a, int b, int c){
	int min = (a < b) ? a : b;
	return (min < c) ? min : c;
}

int max1(int a, int b, int c){
	int eded = (a > b) ? a : b;
	return (eded > c) ? eded : c;
}

int main(){
	int a, b, c, orta;
	cin >> a >> b >> c;
	orta = a + b + c - min1(a, b, c) - max1(a, b, c);

	if (pow(max1(a, b, c) , 2) == (pow(min1(a,b,c), 2) + pow(orta , 2))){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}

	system("pause");
}
