#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long int lli;

int main(){
	lli bir , iki , uc, teze=1;
	lli bir0 , iki0, uc0, teze0=1;
	bir = 0;
	iki = 1;
	uc = 2;
	bir0 = 1;
	iki0 = 1;
	uc0 = 2;
	lli n;
	cin >> n;
	if(n == 2){
		cout << 4 << endl;
		return 0;
	}else if(n == 0){
		cout << 0 << endl;
		return 0;
	}
	for(lli i = 3 ; i <= n ; i++ ){
		teze = bir + iki + uc;
		teze= teze%12345; 
		bir = iki; iki = uc; uc = teze;				
		teze0 = bir0 + iki0 + uc0;
		teze0 = teze0%12345;
	    bir0 = iki0; iki0 = uc0; uc0 = teze0;		
	}
	

	cout << (teze+teze0)%12345 << endl;
	return 0;
}
