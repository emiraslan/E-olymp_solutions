#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

typedef unsigned long long int ulli;

ulli arr[1001];

ulli dortiki(ulli a){
	return (4 + (a-1)*2);
}

ulli araliqda_kicik_tap(ulli a , ulli b){
	ulli minn= 10000;
	ulli bol;
	for(int j = a ; j < b ;j ++ ){
		bol = arr[j] + 4;
		minn = min(minn , bol);
	}
	
	return minn;
}

ulli ebb(ulli a){ // en boyuk bolen
	for( int i = 3 ; i <= sqrt(a) ; i+=2 ){
		if(a%i == 0){
			return a/i;
		}
	}
	return 0;
}
void calc(ulli a){
	ulli mi , tmp , bol, bb;
	
	arr[1] = 4;           
	arr[2] = 6;
	arr[3] = 8;
	arr[4] = 10;
	arr[5] = 12;
	arr[6] = 12;
	arr[7] = 14;
	arr[8] = 14;
	arr[9] = 14;

	
	for(int i = 10; i <= a ; i++){
		//cout << i-1 << " : "<< arr[i-1] << endl;
		if(i%2 == 0){
			bol = araliqda_kicik_tap(i/2 , i);
		}else{
			bol = araliqda_kicik_tap(i/2+1 , i);
		}
		tmp = arr[i-1] + 2;
		
		mi = min(dortiki(i) , bol);
		
		bb = ebb(i);
		if(bb != 0){
			bb = arr[bb] + 4 + (i/bb-2)*2;
		}else{
			bb= 10000;
		}
		
		tmp = (tmp < bb) ? tmp : bb;
		
		arr[i] = (mi < tmp) ? mi : tmp; 
	}
	
	return;
}

int main(){
	ulli a1 , b1 ;
	
	cin >> a1 >> b1;
	
	ulli ma = max(a1 , b1);
	
	calc(ma);
	
	if(a1 == 1){
		cout << arr[b1] << endl;
	}else if(a1 == b1 && a1 == 1){
		cout << "4" << endl;
	}else if(b1 == 1){
		cout << arr[a1] << endl;
	}else{
		cout << arr[a1] + arr[b1] - 2 << endl;
	}
	
	system("pause");
	return 0;
}
