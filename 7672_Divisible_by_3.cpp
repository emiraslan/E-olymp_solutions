#include <iostream>
#include <math.h>
using namespace std;

typedef long long int ulli;


int main(){
	string a;
	cin >> a;
	ulli sum = 0;
	for(int i = 0 ; i < a.size() ; i++){
		sum += a[i]-'0';
	}
	
	cout << sum << endl;
	ulli qaliq = sum%3;
	bool q;
	ulli elave, elave2;
	if(qaliq == 1){
		for(int i = 0 ; i < a.size() ; i++){
			if(a[i] < '9'){
				elave = '9' - a[i];
				elave2 = elave%3;
				a[i] = a[i] + elave - elave2;  
				q = true;
				break;	
			}
		}
		if(q){
			
		}
	}else if( qaliq = 2){
		for(int i =0 ; i < a ; i++){
			if(a[0] == '8'){
				
			}
		}		
	}else{
		for(int i =0 ; i < a ; i++){
			if(a[0] == '8'){
				
			}
		}
	}
	
	system("pause");
	return 0;
}
