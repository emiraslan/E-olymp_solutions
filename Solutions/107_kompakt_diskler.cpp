#include <iostream>
using namespace std;

int calc(int n){
	int y, yq, iq, i , b, bq;
	yq = n%100;
	if(yq > 65){
		yq = 65;
	}
	iq = yq%20;
	if(iq > 15){
		iq = 15;
	}
	bq = iq%1;
	y = n/100;
	i = yq/20;
	b = iq/1;
	return(y*100 + i*30 + iq*2);
}

int  main(){
	
	int n=0;
	
	cin >> n;
	cout << calc(n) << endl;

	system("pause");
	return 0;
}
