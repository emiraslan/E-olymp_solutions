#include <iostream>

using namespace std;

int main(){
	int p , q , k , n;
	int merh;
	cin >> n >> p >> q >> k;
	
	merh = n/(p*q);
	//cout << merh/
	if(k%(merh*q) == 0){
		cout << k/(merh*q) << " " << q << endl;
		return 0;
	}
	int blok = k/(merh*q);
	blok++;
	int met = k%(merh*q);
	if(met%(merh) == 0){
		cout <<blok << " " << met/(merh)  << endl;
		return 0;
	}
	met = met/merh;
	met++;
	cout <<blok  << " " << met  << endl;
	system("pause");
	
}
