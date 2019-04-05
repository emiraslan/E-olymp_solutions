#include <iostream>
using namespace std;

int main(){
	unsigned long long int bir, iki , uc, biriki , ikiuc, biruc , a , b , n, hamisi;
	
	cin >> n;
	bir = n/2;
	iki = n/3;
	uc = n/5;
	
	biriki = n/6;
	ikiuc = n/15;
	biruc = n/10;
	hamisi = n/30;
	a= bir + iki + uc - biriki - ikiuc - biruc + hamisi;
	cout << n - a << endl;
	
}
