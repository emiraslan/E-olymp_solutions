#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long int lli;

int main(){

	lli a , q;
	lli count=0;

	while(1){
		bool oldu = false;
		cin >> a;
		if(a == 0){
			return 0;
		}
		a = a - 3;
	
		if(a == 0){
			cout << 4 << endl;
			continue;
		}
		else if(a<=3){ 
			cout << "No such base" << endl;
			continue;
		}
	
		for(int  i = 4 ; i  <= 9 ; i++){
			if(a%i == 0){
				cout << i << endl;
				oldu = true;
				break;
			}
		}
		
		if(oldu){continue;}
		
		for(int  j = 2 ; j  <= 3; j++){
			if(a%j == 0){
				a = a/j;
			}
		}
		
		for(int  i = 11 ; i  <= sqrt(a) ; i+=2){
		
			if(a%i == 0){
				cout << i << endl;
				oldu = true;
				break;
			}
		}

		if(oldu){ continue; }
	
		if(oldu == false){
			cout << a << endl;
		}
	
	}
	system("pause");
	return 0;
}
